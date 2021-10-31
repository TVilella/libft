/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:40:53 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/30 21:11:22 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstr(char const *str, char cut)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == cut)
			i++;
		else
		{
			count++;
			while (*(str + i) != '\0' && *(str + i) != cut)
				i++;
		}
	}
	return (count);
}

static size_t	ft_lensubstr(char const *str, char cut)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != cut)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		split_num;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	split_num = ft_countstr(s, c);
	split = ft_calloc(sizeof (char *), split_num + 1);
	if (split == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			split[j] = ft_substr(s, i, ft_lensubstr((s + i), c));
			j++;
			i = i + ft_lensubstr((s + i), c);
		}
	}
	return (split);
}
