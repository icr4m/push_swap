/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   targets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:42:55 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 14:33:09 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*find_target_to_b(t_stack *src, t_stack *dest, t_data *data)
{
	if (src->value > data->max_dest || src->value < data->min_dest)
	{
		while (dest->value != data->max_dest)
			dest = dest->next;
		return (dest);
	}
	else
		return (find_target_altb(src, dest));
}

t_stack	*find_target_to_a(t_stack *src, t_stack *dest, t_data *data)
{
	if (src->value > data->max_dest || src->value < data->min_dest)
	{
		while (dest->value != data->min_dest)
			dest = dest->next;
		return (dest);
	}
	else
		return (find_target_alta(src, dest));
}

void	find_targets_to_b(t_stack **src, t_stack **dest, t_data *data)
{
	t_stack	*node;

	node = *src;
	while (node != NULL)
	{
		node->target = find_target_to_b(node, *dest, data);
		node = node->next;
	}
}
