/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:08:45 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 00:13:10 by ijaber           ###   ########.fr       */
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

// exec op
void	exec_all_ops(t_input *input, t_stack **stack_a, t_stack **stack_b);

// input
t_input	*init_new_input(t_input *input, t_ops op);

#endif