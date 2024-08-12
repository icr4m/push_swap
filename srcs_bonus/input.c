/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:02:40 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 21:03:54 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static t_input	*ft_input_last(t_input *input)
{
	if (input == NULL)
		return (NULL);
	while (input->next != NULL)
		input = input->next;
	return (input);
}

static t_input	*ft_input_add_back(t_input **input, t_input *new)
{
	t_input	*last;

	if (input == NULL || new == NULL)
		return (NULL);
	if (*input == NULL)
		*input = new;
	else
	{
		last = ft_input_last(*input);
		if (last == NULL)
			return (NULL);
		last->next = new;
	}
	return (*input);
}

static t_input	*ft_new_node(char *op)
{
	t_input	*node;

	node = (t_input *)malloc(sizeof(t_input));
	if (node == NULL)
		return (NULL);
	node->op = op;
	node->next = NULL;
	return (node);
}

t_input	*init_new_input(t_input *input, char *op)
{
	t_input	*new;

	new = ft_new_node(op);
	if (new == NULL)
		return (NULL);
	if (ft_input_add_back(&input, new) == NULL)
		return (NULL);
	return (input);
}
