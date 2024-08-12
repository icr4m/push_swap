/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:18:40 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 00:44:53 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_op(char *str_read)
{
	if (ft_strcmp(str_read, "sa\n") == 0)
		return (swap_a);
	if (ft_strcmp(str_read, "sb\n") == 0)
		return (swap_b);
	if (ft_strcmp(str_read, "ss\n") == 0)
		return (swap_swap);
	if (ft_strcmp(str_read, "pa\n") == 0)
		return (push_a);
	if (ft_strcmp(str_read, "pb\n") == 0)
		return (push_b);
	if (ft_strcmp(str_read, "ra\n") == 0)
		return (rot_a);
	if (ft_strcmp(str_read, "rb\n") == 0)
		return (rot_b);
	if (ft_strcmp(str_read, "rr\n") == 0)
		return (rot_rot);
	if (ft_strcmp(str_read, "rra\n") == 0)
		return (rev_rot_a);
	if (ft_strcmp(str_read, "rrb\n") == 0)
		return (rev_rot_b);
	if (ft_strcmp(str_read, "rrr\n") == 0)
		return (rev_rot_rot);
	return (-1);
}
