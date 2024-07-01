/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:07:25 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/01 15:22:12 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	sa(t_stack *stack_a)
{
	t_double_list	tmp;

	tmp.content = stack_a->front->content;
	stack_a->front->content = stack_a->front->next->content;
	stack_a->front->next->content = tmp.content;
}

