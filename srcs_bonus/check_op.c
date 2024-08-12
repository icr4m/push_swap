/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:18:40 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 21:36:18 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_op(char *str_read)
{
	if (ft_strcmp(str_read, "pa\n") == 0 || ft_strcmp(str_read, "pb\n") == 0
		|| ft_strcmp(str_read, "sa\n") == 0 || ft_strcmp(str_read, "sb\n") == 0
		|| ft_strcmp(str_read, "ss\n") == 0 || ft_strcmp(str_read, "ra\n") == 0
		|| ft_strcmp(str_read, "rb\n") == 0 || ft_strcmp(str_read, "rr\n") == 0
		|| ft_strcmp(str_read, "rra\n") == 0 || ft_strcmp(str_read,
			"rrb\n") == 0 || ft_strcmp(str_read, "rrr\n") == 0)
		return (1);
	return (0);
}
