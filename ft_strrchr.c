/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:31:37 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 23:16:35 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + length));
	while (length > 0)
	{
		length--;
		if (*(s + length) == (unsigned char)c)
			return ((char *)(s + length));
	}
	return (NULL);
}
