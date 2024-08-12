/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:59:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/12 23:56:43 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_stack
{
	int				value;
	size_t			index;
	size_t			cost;
	struct s_stack	*next;
	struct s_stack	*target;
}					t_stack;

typedef struct s_data
{
	size_t			size;
	size_t			size_src;
	size_t			size_dest;
	int				min_src;
	int				max_src;
	int				min_dest;
	int				max_dest;
	size_t			src_to_head;
	size_t			dest_to_head;
	bool			src_up;
	bool			dest_up;
	t_stack			*cheapest;
}					t_data;

typedef enum e_ops
{
	swap_a,
	swap_b,
	swap_swap,
	push_a,
	push_b,
	rot_a,
	rot_b,
	rot_rot,
	rev_rot_a,
	rev_rot_b,
	rev_rot_rot
}					t_ops;

typedef struct s_input
{
	t_ops			op;
	struct s_input	*next;
}					t_input;

#endif