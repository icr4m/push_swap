/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:41:01 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 14:02:59 by ijaber           ###   ########.fr       */
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
				push_swap_error("invalid character ");
			if ((str[i][j] == '-' || str[i][j] == '+') && !ft_isdigit(str[i][j
					+ 1]))
				push_swap_error("invalid character");
			j++;
		}
		i++;
	}
}

void	check_doublon(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp->value == tmp2->value)
				push_swap_error_free("Doublon", *stack, NULL);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
