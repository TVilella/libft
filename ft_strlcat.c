/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:47:20 by tvilella          #+#    #+#             */
/*   Updated: 2021/08/29 19:54:39 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (dstsize >= l_dst)
		return (l_dst + l_src);
	if (dstsize < l_dst + l_src)
	{
		ft_strlcpy((dst + l_dst), src, dstsize - l_dst - 1);
		dst[dstsize - 1] = '\0';
	}
	else
		ft_strlcpy((dst + l_dst), src, l_src + 1);
	return (l_dst + l_src);
}
