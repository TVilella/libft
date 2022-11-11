/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:05:38 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 19:21:31 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenhex(unsigned long long num)
{
	int	len;

	len = 1;
	while (num / 16 != 0)
	{
		len++;
		num /= 16;
	}
	return (len);
}

static char	*ft_hextoa(unsigned long long num, int lower)
{
	char	*str;
	int		len;
	int		un;

	len = ft_lenhex(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		un = num % 16;
		if (un <= 9)
			str[len - 1] = un + '0';
		else
		{
			if (lower)
				str[len - 1] = un - 10 + 'a';
			else
				str[len - 1] = un - 10 + 'A';
		}
		num /= 16;
		len--;
	}
	return (str);
}

int	ft_printhex(unsigned long long num, int lower)
{
	int		len;
	char	*str;

	if (num == 0)
	{
		str = "0";
		len = ft_printstr(str);
	}
	else
	{
		str = ft_hextoa(num, lower);
		len = ft_printstr(str);
		free(str);
	}
	return (len);
}
