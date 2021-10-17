/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:57:09 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 20:39:49 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	if (dst > src)
		return (ft_memcpy(dst, src, len));
	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	index = 0;
	while (index < len)
	{
		*(aux_dst + index) = *(aux_src + index);
		index++;
	}
	return (dst);
}
