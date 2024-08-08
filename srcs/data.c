/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:45:24 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 14:47:41 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_min(t_stack *stack)
{
	int	min;

	min = INT_MAX;
	while (stack != NULL)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

static int	ft_get_max(t_stack *stack)
{
	int	max;

	max = INT_MIN;
	while (stack != NULL)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

static void	update_stack(t_stack *stack)
{
	size_t	index;

	index = 0;
	while (stack != NULL)
	{
		stack->cost = INT_MAX;
		stack->index = index;
		stack->target = NULL;
		stack = stack->next;
		index++;
	}
}

void	update_data(t_stack **src, t_stack **dest, t_data *data)
{
	data->size_src = ft_stacksize(*src);
	data->size_dest = ft_stacksize(*dest);
	data->min_src = ft_get_min(*src);
	data->max_src = ft_get_max(*src);
	data->min_dest = ft_get_min(*dest);
	data->max_dest = ft_get_max(*dest);
	update_stack(*src);
	update_stack(*dest);
	data->cheapest = NULL;
}

void	init_data(t_stack **stack_a, t_data *data)
{
	data->size = ft_stacksize(*stack_a);
	data->size_src = data->size;
	data->size_dest = 0;
	data->min_src = ft_get_min(*stack_a);
	data->max_src = ft_get_max(*stack_a);
	data->min_dest = INT_MAX;
	data->max_dest = INT_MIN;
	data->src_to_head = INT_MAX;
	data->dest_to_head = INT_MAX;
	data->src_up = FALSE;
	data->dest_up = FALSE;
	data->cheapest = NULL;
}
