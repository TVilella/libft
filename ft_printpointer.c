/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:53:29 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 19:21:29 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printpointer(unsigned long long ptr)
{
	int		count;
	char	*str;

	if (!ptr)
	{
		str = "(nil)";
		count = ft_printstr(str);
	}
	else
	{
		count = ft_printstr("0x");
		count += ft_printhex(ptr, 1);
	}
	return (count);
}
