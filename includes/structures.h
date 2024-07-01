/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:59:26 by ijaber            #+#    #+#             */
/*   Updated: 2024/07/01 15:03:55 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_double_list
{
	void					*content;
	struct s_double_list	*next;
	struct s_double_list	*last;
}							t_double_list;

typedef struct s_stack
{
	struct s_double_list	*front;
	struct s_double_list	*rear;
	int						size;
}							t_stack;