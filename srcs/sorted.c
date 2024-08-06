/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:25:22 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 14:03:18 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checksorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->value;
	while (stack_a)
	{
		if (i > stack_a->value)
			return (0);
		i = stack_a->value;
		stack_a = stack_a->next;
	}
	return (1);
}
