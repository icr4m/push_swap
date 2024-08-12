/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:57:32 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 00:39:06 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	exec_1_op(t_ops op, t_stack **stack_a, t_stack **stack_b)
{
	if (op == swap_a)
		swap(stack_a);
	else if (op == swap_b)
		swap(stack_b);
	else if (op == swap_swap)
		activate_ss(stack_a, stack_b);
	else if (op == push_a)
		push(stack_b, stack_a);
	else if (op == push_b)
		push(stack_a, stack_b);
	else if (op == rot_a)
		rotate(stack_a);
	else if (op == rot_b)
		rotate(stack_b);
	else if (op == rot_rot)
		activate_r(stack_a, stack_b);
	else if (op == rev_rot_a)
		reverse_rotate(stack_a);
	else if (op == rev_rot_b)
		reverse_rotate(stack_b);
	else if (op == rev_rot_rot)
		activate_rr(stack_a, stack_b);
}

void	exec_all_ops(t_input *input, t_stack **stack_a, t_stack **stack_b)
{
	while (input != NULL)
	{
		exec_1_op(input->op, stack_a, stack_b);
		input = input->next;
	}
}
