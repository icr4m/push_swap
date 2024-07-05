/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:54:29 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/05 16:22:40 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft/includes/ft_printf.h"
# include "../Libft/libft/includes/libft.h"
# include "struct.h"
# include <stdio.h>
# include <stdlib.h>

// utils
void	push_swap_error(char *str);
void	push(t_stack **stack, int value, int index);

// parsing
void	parsing(int ac, char **av, t_stack **stack_a, t_stack **stack_b);

// operations 1
void	swap(t_stack **stack_a);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);

// operations 2
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);

// operations 3
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);

// operations 4
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif