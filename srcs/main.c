/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:20:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 13:09:12 by ijaber           ###   ########.fr       */
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
		printf("%d ", stack->value);
		stack = stack->next;
	}
	printf("]\n");
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_data	data;
	char	**tmp_stack;

	stack_a = NULL;
	stack_b = NULL;
	tmp_stack = check_args(ac, av);
	fill_stack(&stack_a, tmp_stack, ac);
	check_doublon(&stack_a);
	init_data(&stack_a, &data);
	if (ft_stacksize(stack_a) > 3)
		big_sort(&stack_a, &stack_b, &data);
	else
		sort_a_min(&stack_a, &data);
	return (0);
}
