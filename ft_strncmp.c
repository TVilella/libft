/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:03:34 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 23:11:43 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	index = 0;
	while (*(aux1 + index) == *(aux2 + index) && index < n)
	{
		if (*(aux1 + index) == '\0')
			return (0);
		index++;
	}
	if (index == n)
		return (0);
	return (*(aux1 + index) - *(aux2 + index));
}
