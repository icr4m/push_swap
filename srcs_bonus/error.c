/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 23:12:23 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/15 23:15:50 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checker_error_free(char *error_msg, t_stack *stack_a, t_input *input)
{
	ft_printf("Error\n");
	ft_printf("%s\n", error_msg);
	free_stack(&stack_a);
	free_input(input);
	exit(1);
}