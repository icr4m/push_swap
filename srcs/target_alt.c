/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_alt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:44:57 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:45:54 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_target_altb(t_stack *src, t_stack *dest, t_data *data)
{
	bool	btw;
	bool	first;
	t_stack	*prev;
	t_stack	*temp_dest;

	prev = dest;
	temp_dest = dest;
	dest = dest->next;
	btw = (src->value < prev->value && src->value > dest->value);
	while (btw == FALSE && dest->next != NULL)
	{
		prev = dest;
		dest = dest->next;
		if (dest->next != NULL)
			btw = (src->value < prev->value && src->value > dest->value);
	}
	first = (src->value > temp_dest->value && src->value < dest->value);
	if (dest->next == NULL && first == TRUE)
		dest = temp_dest;
	return (dest);
}

t_stack	*find_target_alta(t_stack *src, t_stack *dest, t_data *data)
{
	bool btw;
	bool first;
	t_stack *prev;
	t_stack *temp_dest;

	prev = dest;
	temp_dest = dest;
	dest = dest->next;
	btw = (prev->value < src->value && dest->value > src->value);
	while (btw == FALSE && dest->next != NULL)
	{
		prev = dest;
		dest = dest->next;
		btw = (prev->value < src->value && dest->value > src->value);
	}
	first = (src->value > dest->value && src->value < temp_dest->value);
	if (dest->next == NULL && first == TRUE)
		dest = temp_dest;
	return (dest);
}