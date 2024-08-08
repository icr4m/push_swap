/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:04:48 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 14:07:48 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(t_stack **stack_a, char **av, int ac)
{
	if (ac == 2)
		fill_stack_and_free(stack_a, av);
	else
		fill_stack_simple(stack_a, av);
}

void	fill_stack_simple(t_stack **stack_a, char **av)
{
	int		i;
	long	value;

	value = 0;
	i = 0;
	while (av[i] != NULL)
	{
		if (ft_atol_safe(&value, av[i]) == 0)
			push_swap_error_free("Overflow", *stack_a);
		add_fill_new_node(stack_a, (int)value, i);
		i++;
	}
}

void	fill_stack_and_free(t_stack **stack_a, char **splitted)
{
	int		i;
	long	value;

	value = 0;
	i = 0;
	if (!splitted)
	{
		push_swap_error("Split failed");
	}
	while (splitted[i] != NULL)
	{
		if (ft_atol_safe(&value, splitted[i]) == 0)
			push_swap_error_free("Overflow", *stack_a);
		add_fill_new_node(stack_a, (int)value, i);
		free(splitted[i]);
		i++;
	}
	free(splitted);
}
