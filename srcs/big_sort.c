/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:35:38 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 12:05:35 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
		pb(stack_a, &stack_b);
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
		pb(stack_a, &stack_b);
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
		sort_b_till_3(stack_a, &stack_b);
	if (!checksorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_stacksize(*stack_a) == 2)
		sa(stack_a);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_stacksize(*stack_a) - i)
		{
			while ((*stack_a)->value != ft_min(*stack_a))
				ra(stack_a);
		}
		else
		{
			while ((*stack_a)->value != ft_min(*stack_a))
				rra(stack_a);
		}
	}
}
