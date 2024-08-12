/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:18:40 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 21:30:05 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_op(char *str_read)
{
	if (ft_strcmp(str_read, "pa") == 0 || ft_strcmp(str_read, "pb") == 0
		|| ft_strcmp(str_read, "sa") == 0 || ft_strcmp(str_read, "sb") == 0
		|| ft_strcmp(str_read, "ss") == 0 || ft_strcmp(str_read, "ra") == 0
		|| ft_strcmp(str_read, "rb") == 0 || ft_strcmp(str_read, "rr") == 0
		|| ft_strcmp(str_read, "rra") == 0 || ft_strcmp(str_read, "rrb") == 0
		|| ft_strcmp(str_read, "rrr") == 0)
		return (0);
	return (1);
}
