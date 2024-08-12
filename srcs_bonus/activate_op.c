/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   activate_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:05:21 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 22:56:39 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	activate_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a != NULL)
		swap(stack_a);
	if (stack_b != NULL)
		swap(stack_b);
}

void	activate_rotate(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a != NULL)
		rotate(stack_a);
	if (stack_b != NULL)
		rotate(stack_b);
}

void	activate_reverse_rotate(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a != NULL)
		rra(stack_a);
	if (stack_b != NULL)
		rrb(stack_b);
}
