/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:57:12 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/06 02:46:17 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**check_args(int ac, char **av)
{
	char	*cat;
	char	**splitted;
	int		i;

	i = 0;
	cat = malloc(100000);
	check_correct(av + 1);
	if (ac < 2)
		push_swap_error("No arguments");
	if (ac == 2)
	{
		return (splitted = ft_split(av[1], ' '));
		check_doublon();
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_strlcat(cat, av[i], ft_strlen(av[i]));
			i++;
		}
	}
	return (splitted = ft_split(cat, ' '));
}

void	fill_stack(t_stack **stack_a, char **splitted)
{
	int i;

	i = 0;
	if (!splitted)
		push_swap_error("Split failed");
	while (splitted[i] != NULL)
	{
		add_fill_new_node(stack_a, ft_atoi(splitted[i]), i);
		free(splitted[i]);
		i++;
	}
	free(splitted);
}