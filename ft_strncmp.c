/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:03:34 by tvilella          #+#    #+#             */
/*   Updated: 2021/08/28 21:14:41 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	while (*(s1 + index) == *(s2 + index) && index <= n)
	{
		if (*(s1 + index) == '\0')
			return (0);
		index++;
	}
	return (*(s1 + index) - *(s2 + index));
}
