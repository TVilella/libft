/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:07:34 by tvilella          #+#    #+#             */
/*   Updated: 2021/08/28 20:25:32 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	length;

	length = ft_strlen(s);
	if (c == '\0')
		return (*(s + length - 1));
	while (*(s + index) != '\0')
	{
		if (*(s + index) == c)
			return (*(s + index));
		index++;
	}
	return (NULL);
}
