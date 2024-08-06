/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:59:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/06 11:00:50 by ijaber           ###   ########.fr       */
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

#endif