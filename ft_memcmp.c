/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:19:53 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 23:34:27 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (*(p_s1 + index) != *(p_s2 + index))
			return (*(p_s1 + index) - *(p_s2 + index));
		index++;
	}
	return (0);
}
