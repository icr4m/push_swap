/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:57:12 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 16:24:58 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**check_args(int ac, char **av)
{
	char	**splitted;
	int		i;

	i = 1;
	check_correct(av + 1);
	if (ac < 2)
		exit(0);
	if (ac == 2)
	{
		return (splitted = ft_split(av[1], ' '));
	}
	else
		return (av + 1);
}
