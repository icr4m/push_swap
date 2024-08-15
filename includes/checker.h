/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:08:45 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/15 23:16:26 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"
# include "struct.h"

// activate op
void	activate_ss(t_stack **stack_a, t_stack **stack_b);
void	activate_r(t_stack **stack_a, t_stack **stack_b);
void	activate_rr(t_stack **stack_a, t_stack **stack_b);

// check op
int		check_op(char *str_read);

// error
void	checker_error_free(char *error_msg, t_stack *stack_a, t_input *input);

// exec op
void	exec_all_ops(t_input *input, t_stack **stack_a, t_stack **stack_b);

// input
t_input	*init_new_input(t_input *input, t_ops op);

// empty stack
bool	stack_empty(t_stack *stack);

// free
void	free_input(t_input *input);

// end
size_t	is_ok(t_stack **stack_a, t_stack **stack_b);
size_t	is_ko(t_stack **stack_a, t_stack **stack_b);

#endif