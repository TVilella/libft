/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:41:40 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/30 18:09:37 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenint(int n)
{
	size_t	len;

	len = 1;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_nbrtostr(char *str, int n, int size, int sign)
{
	int	i;
	int	divider;
	int	number;

	i = 1;
	divider = 1;
	while (i < size)
	{
		divider = divider * 10;
		i++;
	}
	i = 0;
	while (i < size)
	{
		number = n / divider;
		if (sign == 1)
			number = -1 * number;
		n = n % divider;
		divider = divider / 10;
		str[i] = number + 48;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;
	int		i;

	sign = 0;
	if (n < 0)
		sign = 1;
	size = ft_lenint(n);
	str = (char *)malloc(size + sign + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (sign == 1)
	{
		*(str + i) = '-';
		i++;
	}
	ft_nbrtostr((str + sign), n, size, sign);
	return (str);
}
