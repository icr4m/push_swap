/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_ba.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:09:06 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 13:41:32 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int	case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = find_place_a(a, c);
	if (i < find_index(b, c))
		i = find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int	case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = ft_stacksize(a) - find_place_a(a, c);
	if ((i < (ft_stacksize(b) - find_index(b, c))) && find_index(b, c))
		i = ft_stacksize(b) - find_index(b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int	case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_index(b, c))
		i = ft_stacksize(b) - find_index(b, c);
	i = find_place_a(a, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int	case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (find_place_a(a, c))
		i = ft_stacksize(a) - find_place_a(a, c);
	i = find_index(b, c) + i;
	return (i);
}
