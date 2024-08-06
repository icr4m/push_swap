/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:42:53 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:27:27 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_data	*get_src_to_head(t_stack *src, t_data *data)
{
	if (src->index <= (data->size_src / 2))
	{
		data->src_to_head = src->index;
		data->src_up = TRUE;
	}
	else
	{
		data->src_to_head = data->size_src - src->index;
		data->src_up = FALSE;
	}
	return (data);
}

static t_data	*get_dest_to_head(t_stack *dest, t_data *data)
{
	if (dest->index <= (data->size_dest / 2))
	{
		data->dest_to_head = dest->index;
		data->dest_up = TRUE;
	}
	else
	{
		data->dest_to_head = data->size_dest - dest->index;
		data->dest_up = FALSE;
	}
	return (data);
}

size_t	get_1_cost(t_stack *src, t_stack *dest, t_data *data)
{
	data = get_src_to_head(src, data);
	while (dest != src->target)
		dest = dest->next;
	data = get_dest_to_head(dest, data);
	if (data->src_up == data->dest_up)
		return (PUSH_COST + ft_max(data->src_to_head, data->dest_to_head));
	return (PUSH_COST + data->src_to_head + data->dest_to_head);
}

void	gets_costs(t_stack **src, t_stack **dest, t_data *data)
{
	size_t	cheapest;
	t_stack	*node;

	cheapest = INT_MAX;
	node = *src;
	while (node != NULL)
	{
		node->cost = get_1_cost(node, *dest, data);
		if (node->cost < cheapest)
		{
			cheapest = node->cost;
			data->cheapest = node;
		}
		node = node->next;
	}
	node = *src;
	while (node != NULL && node->cost != cheapest)
		node = node->next;
	node->cost = get_1_cost(node, *dest, data);
}
