/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:54:29 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 10:56:07 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft/includes/ft_printf.h"
# include "../Libft/libft/includes/libft.h"
# include "struct.h"
# include <stdio.h>
# include <stdlib.h>

# define ERROR -1
# define SUCCESS 0

# define STDIN 0
# define STDOUT 1
# define STDERR 2

# define INDEX_START 0
# define INDEX_ARGV 1
# define MIN_ARGC 2
# define PUSH_COST 1
# define SAME_VALUE 0

# define SRC_ID -1
# define DEST_ID 1

# define MIN_STACK_A 3
# define MIN_STACK_B 2

# define TRUE 1
# define FALSE 0

// utils
void			push_swap_error(char *str);
void			push_swap_error_free(char *str, t_stack *stack_a,
					t_stack *stack_b);
void			add_fill_new_node(t_stack **stack, int value, int index);

// parsing
char			**check_args(int ac, char **av);

// parsing utils
void			check_correct(char **str);
void			check_doublon(t_stack **stack);

// fill stack
void			fill_stack(t_stack **stack_a, char **av, int ac);
void			fill_stack_simple(t_stack **stack_a, char **av);
void			fill_stack_and_free(t_stack **stack_a, char **splitted);

// free stack
void			free_stack(t_stack **stack);

// stack utils
int				find_index(t_stack *a, int nbr);
int				find_place_a(t_stack *stack_a, int nbr_push);
int				find_place_b(t_stack *stack_b, int nbr_push);

// stack utils 2
t_stack			*ft_stacklast(t_stack *stack);
int	ft_stacksize(t_stack *# define ERROR -1
# define SUCCESS 0

# define STDIN 0
# define STDOUT 1
# define STDERR 2

# define INDEX_START 0
# define INDEX_ARGV 1
# define MIN_ARGC 2
# define PUSH_COST 1
# define SAME_VALUE 0

# define SRC_ID -1
# define DEST_ID 1stack);
long			ft_min(t_stack *stack);
long			ft_max(t_stack *stack);

// big sort
void			sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
void			big_sort(t_stack **stack_a);
t_stack			*sort_b(t_stack **stack_a);
t_stack			**sort_a(t_stack **stack_a, t_stack **stack_b);

// sorted
int				checksorted(t_stack *stack_a);

// little sort
void			little_sort(t_stack **stack);
void			sort_two(t_stack **stack);
void			sort_three(t_stack **stack);

// operations 1
void			swap(t_stack **stack_a);
void			sa(t_stack **stack_a);
void			sb(t_stack **stack_b);

// operations 2
void			rotate(t_stack **stack);
void			ra(t_stack **stack_a);
void			rb(t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);

// operations 3
void			pa(t_stack **stack_a, t_stack **stack_b);
void			pb(t_stack **stack_a, t_stack **stack_b);

// operations 4
void			reverse_rotate(t_stack **stack);
void			rra(t_stack **stack_a);
void			rrb(t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);

// targets 
static t_stack	*find_target_to_b(t_stack *src, t_stack *dest, t_data *data);
t_stack			*find_target_to_a(t_stack *src, t_stack *dest, t_data *data);
void	find_targets_to_b(t_stack **src, t_stack **dest, t_data *data)e

#endif