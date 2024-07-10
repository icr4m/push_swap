/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:20:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/10 16:49:48 by ijaber           ###   ########.fr       */
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

// Fonction pour libérer la mémoire de la pile

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
	print_stack("Stack A", stack_a);
	print_stack("Stack B", stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	rra(&stack_a);
	print_stack("Stack A", stack_a);
	print_stack("Stack B", stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
