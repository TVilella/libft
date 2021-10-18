/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:07:34 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 22:54:04 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	length;

	length = ft_strlen(s);
	if (c == 0 || length == 0)
		return ((char *)(s + length));
	index = 0;
	while (*(s + index) != '\0')
	{
		if (*(s + index) == (unsigned char)c)
			return ((char *)(s + index));
		index++;
	}
	return (NULL);
}
