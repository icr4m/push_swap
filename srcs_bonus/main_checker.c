/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:53:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 16:50:41 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("%d>>", stack->value);
		stack = stack->next;
	}
}

int	main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;
	char **tmp_stack;
	stack_a = NULL;
	stack_b = NULL;
	tmp_stack = check_args(ac, av);
	fill_stack(&stack_a, tmp_stack, ac);
	check_doublon(&stack_a);
	ft_print_stack(stack_a);
}