/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:07:25 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/01 16:02:53 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	t_double_list	tmp;

	if (stack_a->size < 2)
		push_swap_error("Not enough elements in stack A", stack_a);
	tmp.content = stack_a->front->content;
	stack_a->front->content = stack_a->front->next->content;
	stack_a->front->next->content = tmp.content;
}
