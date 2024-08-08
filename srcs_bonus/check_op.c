/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:18:40 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 19:03:21 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_op(char *str_read)
{
	if (ft_strncmp(str_read, "pa", 2) == 0 || ft_strncmp(str_read, "sa", 2) == 0
		|| ft_strncmp(str_read, "sb", 2) == 0 || ft_strncmp(str_read, "ss",
			2) == 0 || ft_strncmp(str_read, "ra", 2) == 0
		|| ft_strncmp(str_read, "rb", 2) == 0 || ft_strncmp(str_read, "rr",
			2) == 0 || ft_strncmp(str_read, "rra", 3) == 0
		|| ft_strncmp(str_read, "rrb", 3) == 0 || ft_strncmp(str_read, "rrr",
			3) == 0)
		return (1);
	return (0);
}
