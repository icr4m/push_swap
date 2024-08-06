/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transfers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:28:59 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:43:54 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	transfer_to_stack_b(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	static void	(*ft_rot_both)(t_stack **, t_stack **);

	ft_rot_both = NULL;
	if (data->src_up == TRUE && data->dest_up == TRUE)
		ft_rot_both = &rr;
	else if (data->src_up == FALSE && data->dest_up == FALSE)
		ft_rot_both = &rrr;
	while (ft_rot_both != NULL && data->src_to_head > 0
		&& data->dest_to_head > 0)
		move_both(stack_a, stack_b, data, ft_rot_both);
	while (data->src_up == TRUE && data->src_to_head > 0)
		move(stack_a, data, SRC_ID, &ra);
	while (data->src_up == FALSE && data->src_to_head > 0)
		move(stack_a, data, SRC_ID, &rra);
	while (data->dest_up == TRUE && data->dest_to_head > 0)
		move(stack_b, data, DEST_ID, &rb);
	while (data->dest_up == FALSE && data->dest_to_head > 0)
		move(stack_b, data, DEST_ID, &rrb);
	pb(stack_a, stack_b);
}

void	transfer_to_stack_a(t_stack **stack_a, t_stack **stack_b, t_data *data)
{
	static void	(*ft_rot_both)(t_stack **, t_stack **);

	ft_rot_both = NULL;
	if (data->src_up == TRUE && data->dest_up == TRUE)
		ft_rot_both = &rr;
	else if (data->src_up == FALSE && data->dest_up == FALSE)
		ft_rot_both = &rrr;
	while (ft_rot_both != NULL && data->src_to_head > 0
		&& data->dest_to_head > 0)
		move_both(stack_a, stack_b, data, ft_rot_both);
	while (data->src_up == TRUE && data->src_to_head > 0)
		move(stack_b, data, SRC_ID, &rb);
	while (data->src_up == FALSE && data->src_to_head > 0)
		move(stack_b, data, SRC_ID, &rrb);
	while (data->dest_up == TRUE && data->dest_to_head > 0)
		move(stack_a, data, DEST_ID, &ra);
	while (data->dest_up == FALSE && data->dest_to_head > 0)
		move(stack_a, data, DEST_ID, &rra);
	pa(stack_a, stack_b);
}
