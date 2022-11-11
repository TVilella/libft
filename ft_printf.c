/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarvalh <tcarvalh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 04:27:41 by tcarvalh          #+#    #+#             */
/*   Updated: 2022/07/10 19:21:35 by tcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isflag(char c)
{
	if (ft_strchr("cspdiuxX%", c))
		return (1);
	return (0);
}

static int	ft_putconversion(const char c, va_list ap)
{
	int		count;

	count = 0;
	if (c == 'c')
	{
		ft_putchar_fd((char)va_arg(ap, int), 1);
		count = 1;
	}
	else if (c == 's')
		count = ft_printstr(va_arg(ap, char *));
	else if (c == 'p')
		count = ft_printpointer(va_arg(ap, unsigned long long));
	else if (c == 'i' || c == 'd')
		count = ft_printnbr(va_arg(ap, int));
	else if (c == 'u')
		count = ft_printuint(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		count = ft_printhex(va_arg(ap, unsigned int), c == 'x');
	else if (c == '%')
		count = write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_isflag(str[i + 1]))
				count += ft_putconversion(str[i + 1], ap);
			else
				count += write(1, str + i, 2);
			i++;
		}
		else
			count += write(1, str + i, 1);
		i++;
	}
	va_end(ap);
	return (count);
}
