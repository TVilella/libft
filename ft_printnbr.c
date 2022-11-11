/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:55:16 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 19:21:30 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_strlen(num);
	write(1, num, len);
	free(num);
	return (len);
}
