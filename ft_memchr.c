/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 21:54:35 by tvilella          #+#    #+#             */
/*   Updated: 2021/09/25 22:07:43 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			index;

	src = (unsigned char *) s;
	index = 0;
	c = (unsigned char) c;
	while (index < n)
	{
		if (*(src + index) == c)
			return ((void *)(src + index));
		index++;
	}
	return (NULL);
}
