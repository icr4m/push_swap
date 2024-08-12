/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:53:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 21:57:18 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_print_stack(t_input *stack)
{
	t_input	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_printf("%s>>", tmp->op);
		tmp = tmp->next;
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
		if (r_op == 0)
			push_swap_error_free("Incorrect operations", *stack);
		input = init_new_input(input, str_read);
		free(str_read);
		str_read = get_next_line(0);
	}
	free(str_read);
	
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**tmp_stack;

	stack_a = NULL;
	stack_b = NULL;
	tmp_stack = check_args(ac, av);
	fill_stack(&stack_a, tmp_stack, ac);
	check_doublon(&stack_a);
	checker(&stack_a);
}
