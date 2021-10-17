/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:25:38 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 19:37:47 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		*(aux_dst + n) = *(aux_src + n);
	}
	return (dst);
}
