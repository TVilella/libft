/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvilella <tvilella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:42:55 by tvilella          #+#    #+#             */
/*   Updated: 2021/10/17 21:20:10 by tvilella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sig;

	nbr = 0;
	sig = 1;
	while (*str >= '\t' && *str <= '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '+')
			sig = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (int)(*str - '0');
		str++;
	}
	return (sig * nbr);
}
