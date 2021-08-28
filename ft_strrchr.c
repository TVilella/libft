/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:31:37 by tvilella          #+#    #+#             */
/*   Updated: 2021/08/28 20:34:09 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s) - 1;
	if (c == '\0')
		return (*(s + length));
	while (length > 0)
	{
		if (*(s + length) == c)
			return (*(s + length));
		length--;
	}
	return (NULL);
}
