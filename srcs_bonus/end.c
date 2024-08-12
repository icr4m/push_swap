/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:53:14 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 01:01:10 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	is_ok(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	ft_printf("OK\n");
	exit(EXIT_SUCCESS);
	return (1);
}

size_t	is_ko(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	ft_printf("KO\n");
	exit(EXIT_SUCCESS);
	return (0);
}
