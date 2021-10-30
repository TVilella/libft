/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:40:53 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/30 13:49:09 by tvilella         ###   ########.fr       */
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

void	ft_subcat(char *new, char const *str, char cut )
{
	int	i;

	i = 0;
	while (*(str + i) != cut && *(str + i) != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
}

void	ft_cat(char **new, char const *str, char cut, int n)
{
	size_t	len;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	len = 0;
	start = 0;
	while (*(str + j) != '\0' && i < n)
	{
		while (*(str + j) == cut)
			j++;
		start = j;
		while (*(str + j) != cut && *(str + j) != '\0')
		{
			len++;
			j++;
		}
		new[i] = malloc(sizeof(char) * (len + 1));
		ft_subcat(new[i], (str + start), cut);
		len = 0;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		split_num;

	split_num = ft_countstr(s, c);
	split = (char **)malloc(sizeof (char *) * (split_num + 1));
	if (split == NULL)
		return (NULL);
	ft_cat(split, s, c, split_num);
	return (split);
}
