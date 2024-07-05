/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:41:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/05 18:04:20 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_correct(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (!ft_isdigit(str[i][j]) && str[i][j] != '-' && str[i][j] != '+'
				&& str[i][j] != ' ')
				push_swap_error("Invalid number");
			if ((str[i][j] == '-' || str[i][j] == '+') && !ft_isdigit(str[i][j
					+ 1]))
				push_swap_error("Invalid number");
			j++;
		}
		i++;
	}
}
