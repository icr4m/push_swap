/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:52:59 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/08 14:07:02 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_error_free(char *str, t_stack *stack_a)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	free_stack(&stack_a);
	exit(1);
}

void	push_swap_error(char *str)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	exit(1);
}

void	add_fill_new_node(t_stack **stack, int value, int index)
{
	t_stack	*new_node;
	t_stack	*tmp;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		push_swap_error("new_node malloc failed");
	new_node->value = value;
	new_node->index = index;
	tmp = *stack;
	if (!*stack)
	{
		new_node->next = NULL;
		*stack = new_node;
		return ;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->next = NULL;
	}
}
