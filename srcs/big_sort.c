/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:35:38 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:01:04 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_to_b(t_stack **stack_a, t_stack stack_b, t_data *data)
{
}

void	sort_a_min(t_stack **stack_a, t_data *data)
{
	if (data->size_src == MIN_STACK_A && checksorted(*stack_a) == FALSE)
	{
		if ((*stack_a)->value == data->max_src)
			ra(stack_a);
		else if ((*stack_a)->next->value == data->max_src)
			rra(stack_a);
		if ((*stack_a)->value != data->min_src)
			sa(stack_a);
	}
	else if (*stack_a != NULL && (*stack_a)->value != data->min_src)
		sa(stack_a);
}

static void	sort_to_a(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	update_data(stack_b, stack_a, data);
	while (data->size_dest != data->size)
	{
		(*stack_b)->target = ft_find_target_to_a(*stack_b, *stack_a, data);
		(*stack_b)->cost = ft_assess_cost(*stack_b, *stack_a, data);
		transfer_to_stack_a(stack_a, stack_b, data);
		ft_update_data(stack_b, stack_a, data);
	}
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	sort_to_b(stack_a, stack_b, data);
	sort_a_min(stack_a, data);
	sort_to_a(stack_a, stack_b, data);
	ft_update_data(stack_a, stack_b, data);
	ft_sort_a(stack_a, data);
}
