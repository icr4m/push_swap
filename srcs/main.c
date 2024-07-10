/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:20:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/10 18:37:27 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher la pile
void	print_stack(const char *label, t_stack *stack)
{
	printf("%s [ ", label);
	while (stack)
	{
		printf("%ld ", stack->value);
		stack = stack->next;
	}
	printf("]\n");
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
	print_stack("stack_a", stack_a);
	print_stack("stack_b", stack_b);
	if (checksorted(stack_a))
	{
		print_stack("stack_a", stack_a);
		print_stack("stack_b", stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (0);
	}
	little_sort(&stack_a);
	if (checksorted(stack_a))
	{
		print_stack("stack_a", stack_a);
		print_stack("stack_b", stack_b);
		free_stack(&stack_a);
		free_stack(&stack_b);
		return (0);
	}
	print_stack("stack_a", stack_a);
	print_stack("stack_b", stack_b);
	ft_printf("stack_a is not sorted\n");
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
