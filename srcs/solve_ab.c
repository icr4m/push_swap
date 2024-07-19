/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:07:54 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 13:38:07 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_place_b(b, c);
	if (i < find_index(a, c))
		i = find_index(a, c);
	return (i);
}

int	case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = ft_stacksize(b) - find_place_b(b, c);
	if ((i < (ft_stacksize(a) - find_index(a, c))) && find_index(a, c))
		i = ft_stacksize(a) - find_index(a, c);
	return (i);
}

int	case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(a, c))
		i = ft_stacksize(a) - find_index(a, c);
	i = find_place_b(b, c) + i;
	return (i);
}

int	case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_b(b, c))
		i = ft_stacksize(b) - find_place_b(b, c);
	i = find_index(a, c) + i;
	return (i);
}
