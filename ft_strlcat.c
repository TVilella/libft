/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:47:20 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 23:47:36 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	while (index < dstsize && *(dst + index) != '\0')
		index++;
	if (index < dstsize)
		ft_strlcpy((dst + index), src, dstsize - index);
	return (ft_strlen(src) + index);
}
