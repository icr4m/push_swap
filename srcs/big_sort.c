/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:35:38 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 16:08:07 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb(*stack_a, *stack_b, tmp->value))
				i = apply_rarb(stack_a, stack_b, tmp->value, 'a');
			else if (i == case_rrarrb(*stack_a, *stack_b, tmp->value))
				i = apply_rrarrb(stack_a, stack_b, tmp->value, 'a');
			else if (i == case_rarrb(*stack_a, *stack_b, tmp->value))
				i = apply_rarrb(stack_a, stack_b, tmp->value, 'a');
			else if (i == case_rrarb(*stack_a, *stack_b, tmp->value))
				i = apply_rrarb(stack_a, stack_b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
	{
		printf("caca\n");
		pb(stack_a, &stack_b);
	}
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
		pb(stack_a, &stack_b);
	if (ft_stacksize(*stack_a) > 3 && !checksorted(*stack_a))
		sort_b_till_3(stack_a, &stack_b);
	if (!checksorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

t_stack	**sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == case_rarb_a(*stack_a, *stack_b, tmp->value))
				i = apply_rarb(stack_a, stack_b, tmp->value, 'b');
			else if (i == case_rarrb_a(*stack_a, *stack_b, tmp->value))
				i = apply_rarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == case_rrarrb_a(*stack_a, *stack_b, tmp->value))
				i = apply_rrarrb(stack_a, stack_b, tmp->value, 'b');
			else if (i == case_rrarb_a(*stack_a, *stack_b, tmp->value))
				i = apply_rrarb(stack_a, stack_b, tmp->value, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	big_sort(t_stack **stack_a)
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
		i = find_index(*stack_a, ft_min(*stack_a));
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
