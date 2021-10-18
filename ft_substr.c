/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 09:11:46 by parobert          #+#    #+#             */
/*   Updated: 2021/10/18 00:38:09 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = ft_strdup("");
		return (sub);
	}
	if ((s_len - start) < len)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (sub != NULL)
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
