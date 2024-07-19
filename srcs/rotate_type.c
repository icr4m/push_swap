/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:28:25 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/19 14:03:12 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from B to A.
int	rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = case_rrarrb_a(a, b, b->value);
	while (tmp)
	{
		if (i > case_rarb_a(a, b, tmp->value))
			i = case_rarb_a(a, b, tmp->value);
		if (i > case_rrarrb_a(a, b, tmp->value))
			i = case_rrarrb_a(a, b, tmp->value);
		if (i > case_rarrb_a(a, b, tmp->value))
			i = case_rarrb_a(a, b, tmp->value);
		if (i > case_rrarb_a(a, b, tmp->value))
			i = case_rrarb_a(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from A to B.
int	rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = case_rrarrb(a, b, a->value);
	while (tmp)
	{
		if (i > case_rarb(a, b, tmp->value))
			i = case_rarb(a, b, tmp->value);
		if (i > case_rrarrb(a, b, tmp->value))
			i = case_rrarrb(a, b, tmp->value);
		if (i > case_rarrb(a, b, tmp->value))
			i = case_rarrb(a, b, tmp->value);
		if (i > case_rrarb(a, b, tmp->value))
			i = case_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}
