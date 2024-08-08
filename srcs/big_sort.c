/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:35:38 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 14:49:06 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_to_b(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	pb(stack_a, stack_b);
	update_data(stack_a, stack_b, data);
	if (data->size_src > 3)
		pb(stack_a, stack_b);
	update_data(stack_a, stack_b, data);
	while (data->size_src != 3)
	{
		find_targets_to_b(stack_a, stack_b, data);
		gets_costs(stack_a, stack_b, data);
		transfer_to_stack_b(stack_a, stack_b, data);
		update_data(stack_a, stack_b, data);
	}
}

void	sort_a_min(t_stack **stack_a, t_data *data)
{
	if (data->size_src == 3 && checksorted(*stack_a) == FALSE)
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
		(*stack_b)->target = find_target_to_a(*stack_b, *stack_a, data);
		(*stack_b)->cost = get_1_cost(*stack_b, *stack_a, data);
		transfer_to_stack_a(stack_a, stack_b, data);
		update_data(stack_b, stack_a, data);
	}
}

void	sort_a(t_stack **stack_a, t_data *data)
{
	t_stack		*node;
	static void	(*ft_rot_type)(t_stack **);

	node = *stack_a;
	while (node->value != data->min_src)
		node = node->next;
	if (node->index <= (data->size / 2))
		ft_rot_type = &ra;
	else
		ft_rot_type = &rra;
	while ((*stack_a)->value != data->min_src)
		move(stack_a, data, SRC_ID, ft_rot_type);
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	sort_to_b(stack_a, stack_b, data);
	sort_a_min(stack_a, data);
	sort_to_a(stack_a, stack_b, data);
	update_data(stack_a, stack_b, data);
	sort_a(stack_a, data);
}
