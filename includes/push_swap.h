/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:54:29 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 14:58:40 by ijaber           ###   ########.fr       */
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
void	push_swap_error(char *str);
void	push_swap_error_free(char *str, t_stack *stack_a, t_stack *stack_b);
void	add_fill_new_node(t_stack **stack, int value, int index);

// parsing
char	**check_args(int ac, char **av);

// parsing utils
void	check_correct(char **str);
void	check_doublon(t_stack **stack);

// fill stack
void	fill_stack(t_stack **stack_a, char **av, int ac);
void	fill_stack_simple(t_stack **stack_a, char **av);
void	fill_stack_and_free(t_stack **stack_a, char **splitted);

// free stack
void	free_stack(t_stack **stack);

// stack utils
int		find_index(t_stack *a, int nbr);
// stack utils 2
t_stack	*ft_stacklast(t_stack *stack);
int		ft_stacksize(t_stack *stack);
int		ft_max(int a, int b);
int		ft_min(int a, int b);

// big sort
void	sort_a_min(t_stack **stack_a, t_data *data);
void	sort_a(t_stack **stack_a, t_data *data);
void	big_sort(t_stack **stack_a, t_stack **stack_b, t_data *data);

// sorted
int		checksorted(t_stack *stack_a);

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

// overflow
int		ft_atol_safe(long *dest, const char *string);

// targets
t_stack	*find_target_to_a(t_stack *src, t_stack *dest, t_data *data);
void	find_targets_to_b(t_stack **src, t_stack **dest, t_data *data);

// targets 2
t_stack	*find_target_altb(t_stack *src, t_stack *dest, t_data *data);
t_stack	*find_target_alta(t_stack *src, t_stack *dest, t_data *data);

// costs
size_t	get_1_cost(t_stack *src, t_stack *dest, t_data *data);
void	gets_costs(t_stack **src, t_stack **dest, t_data *data);

// moves
void	move_both(t_stack **stack_a, t_stack **stack_b, t_data *data,
			void (*f)(t_stack **, t_stack **));
void	move(t_stack **stack, t_data *data, int id, void (*f)(t_stack **));

// transfers
void	transfer_to_stack_b(t_stack **stack_a, t_stack **stack_b, t_data *data);
void	transfer_to_stack_a(t_stack **stack_a, t_stack **stack_b, t_data *data);

// data
void	update_data(t_stack **src, t_stack **dest, t_data *data);
void	init_data(t_stack **stack_a, t_data *data);

#endif