/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:20:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/06 02:10:49 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher la pile
void	print_stack(const char *label, t_stack *stack)
{
	printf("%s top -> ", label);
	while (stack)
	{
		printf("%ld ", stack->value);
		stack = stack->next;
	}
	printf("-> bottom\n");
}

// Fonction pour libérer la mémoire de la pile
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	fill_stack(&stack_a, check_args(ac, av));
	print_stack("Stack A", stack_a);
	print_stack("Stack B", stack_b);
	sa(&stack_a);
	print_stack("Stack A", stack_a);
	print_stack("Stack B", stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
