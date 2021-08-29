/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:24:23 by tvilella          #+#    #+#             */
/*   Updated: 2021/08/29 18:45:39 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l_src;
	size_t	index;

	l_src = ft_strlen(src);
	index = 0;
	if (dstsize == 0)
		return (l_src);
	while (index < dstsize - 1 && *(src + index))
	{
		*(dst + index) = *(src + index);
		index++;
	}
	*(dst + index) = '\0';
	return (l_src);
}
