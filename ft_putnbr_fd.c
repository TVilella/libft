/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:43:47 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/30 19:00:45 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenint(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_exp(int size)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	while (i < size)
	{
		result = result * 10;
		i++;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	c;
	int	len;
	int	sign;
	int	exp;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		write(fd, "-", 1);
	}
	len = (int)ft_lenint(n);
	exp = ft_exp(len);
	while (len > 0)
	{
		c = n / exp;
		c *= sign;
		c += '0';
		write(fd, &c, 1);
		n = n % exp;
		exp /= 10;
		len --;
	}
}
