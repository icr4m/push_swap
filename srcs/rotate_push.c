/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:23:31 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 13:34:57 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rr(a, b);
		while ((*a)->value != c)
			ra(a);
		while (find_place_b(*b, c) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rr(a, b);
		while ((*b)->value != c)
			rb(b);
		while (find_place_a(*a, c) > 0)
			ra(a);
		pa(a, b);
	}
	return (-1);
}

int	apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && find_place_b(*b, c) > 0)
			rrr(a, b);
		while ((*a)->value != c)
			rra(a);
		while (find_place_b(*b, c) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while ((*b)->value != c && find_place_a(*a, c) > 0)
			rrr(a, b);
		while ((*b)->value != c)
			rrb(b);
		while (find_place_a(*a, c) > 0)
			rra(a);
		pa(a, b);
	}
	return (-1);
}

int	apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			rra(a);
		while (find_place_b(*b, c) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			rra(a);
		while ((*b)->value != c)
			rb(b);
		pa(a, b);
	}
	return (-1);
}

int	apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ra(a);
		while (find_place_b(*b, c) > 0)
			rb(b);
		pb(a, b);
	}
	else
	{
		while (find_place_a(*a, c) > 0)
			ra(a);
		while ((*b)->value != c)
			rrb(b);
		pa(a, b);
	}
	return (-1);
}
