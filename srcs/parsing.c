/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:57:12 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/05 16:23:03 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(int ac, char **av, t_stack **stack_a, t_stack **stack_b)
{
	char	**splitted;
	int		i;

	i = 0;
	if (ac < 2)
		push_swap_error("No arguments");
	if (ac == 2)
	{
		splitted = ft_split(av[1], ' ');
		if (!splitted)
			push_swap_error("Split failed");
		while (splitted[i] != NULL)
		{
			push(stack_a, ft_atoi(splitted[i]), i);
			i++;
		}
	}
}
