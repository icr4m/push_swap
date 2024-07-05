/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:57:12 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/05 18:14:27 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int ac, char **av)
{
	char	**splitted;
	int		i;

	i = 0;
	check_correct(av + 1);
	if (ac < 2)
		push_swap_error("No arguments");
	if (ac == 2)
	{
		check_doublon();
	}
}
// splitted = ft_split(av[1], ' ');
// if (!splitted)
// 	push_swap_error("Split failed");
// while (splitted[i] != NULL)
// {
// 	add_fill_new_node(stack_a, ft_atoi(splitted[i]), i);
// 	free(splitted[i]);
// 	i++;
// }
// free(splitted);