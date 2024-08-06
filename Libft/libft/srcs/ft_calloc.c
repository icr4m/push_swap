/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaber <ijaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:26:43 by ijaber            #+#    #+#             */
/*   Updated: 2024/05/17 16:34:12 by ijaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	total_size = count * size;
	void			*tmp;

	tmp = NULL;
	if (total_size == 0 || count <= SIZE_MAX / size)
		tmp = malloc(total_size);
	if (tmp != NULL)
		ft_bzero(tmp, total_size);
	return (tmp);
}
