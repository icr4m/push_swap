/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:53:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 00:14:59 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_stack(const char *label, t_stack *stack)
{
	printf("%s [ ", label);
	while (stack)
	{
		printf("%d ", stack->value);
		stack = stack->next;
	}
	printf("]\n");
}

void	checker(t_stack **stack_a)
{
	t_input	*input;
	char	*str_read;
	t_ops	r_op;
	t_stack	*stack_b;

	input = NULL;
	stack_b = NULL;
	str_read = get_next_line(0);
	while (str_read != NULL)
	{
		r_op = check_op(str_read);
		free(str_read);
		if (r_op == 0)
			push_swap_error_free("Incorrect operations", *stack_a);
		input = init_new_input(input, r_op);
		str_read = get_next_line(0);
	}
	free(str_read);
	print_stack("stack_a", *stack_a);
	print_stack("stack_b", stack_b);
	exec_all_ops(input, stack_a, &stack_b);
	print_stack("stack_a", *stack_a);
	print_stack("stack_b", stack_b);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	char	**tmp_stack;

	stack_a = NULL;
	tmp_stack = check_args(ac, av);
	fill_stack(&stack_a, tmp_stack, ac);
	check_doublon(&stack_a);
	checker(&stack_a);
}
