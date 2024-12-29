/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:09:08 by ccalabro          #+#    #+#             */
/*   Updated: 2024/09/22 19:16:08 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_options(const char c, va_list args)
{
	int		n;
	void	*ptr;

	n = 0;
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if (!ptr)
			return (ft_putstr("(nil)"));
		return (ft_putstr("0x")
			+ ft_putptr((unsigned long long int)ptr, &n));
	}
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int), &n));
	else if (c == 'u')
		return (ft_putnbruns(va_arg(args, unsigned int), &n));
	else if (c == 'x')
		return (ft_putnbrxlow(va_arg(args, unsigned int), &n));
	else if (c == 'X')
		return (ft_putnbrxup(va_arg(args, unsigned int), &n));
	return (ft_putchar(c));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = 0;
	ret = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret += ft_options(str[i], args);
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
