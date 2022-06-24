/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:19:25 by tvilella          #+#    #+#             */
/*   Updated: 2022/06/24 20:37:36 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	malloc_size;

	malloc_size = count * size;
	if (!size || !count)
		return (NULL);
	if ((malloc_size / size) != count)
		return (NULL);
	ptr = malloc(malloc_size);
	if (ptr != NULL)
		ft_bzero(ptr, malloc_size);
	return (ptr);
}
