/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:18:56 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:43:02 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_both(t_stack **stack_a, t_stack **stack_b, t_data *data,
		void (*f)(t_stack **, t_stack **))
{
	f(stack_a, stack_b);
	data->src_to_head--;
	data->dest_to_head--;
}

void	move(t_stack **stack, t_data *data, int id, void (*f)(t_stack **))
{
	if (id == SRC_ID)
	{
		f(stack);
		data->src_to_head--;
	}
	else if (id == DEST_ID)
	{
		f(stack);
		data->dest_to_head--;
	}
}
