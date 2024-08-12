/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 01:10:37 by ijaber            #+#    #+#             */
/*   Updated: 2024/08/13 01:11:02 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_input(t_input *input)
{
	t_input	*next;

	next = input;
	while (input != NULL)
	{
		next = input->next;
		free(input);
		input = next;
	}
}
