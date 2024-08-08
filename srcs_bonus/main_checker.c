/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:53:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 19:17:39 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_print_stack(t_input *stack)
{
	while (stack != NULL)
	{
		ft_printf("%s>>", stack->op);
		stack = stack->next;
	}
}

void	checker(t_stack **stack)
{
	t_input	*input;
	char	*str_read;
	int		r_op;

	input = NULL;
	str_read = get_next_line(0);
	while (str_read != NULL)
	{
		r_op = check_op(str_read);
		free(str_read);
		if (r_op == 0)
			push_swap_error_free("Incorrect operations", *stack);
		ft_printf("%d\n", r_op);
		input->op = str_read;
		str_read = get_next_line(0);
	}
	ft_print_stack(input);
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
	checker(&stack_a);
}