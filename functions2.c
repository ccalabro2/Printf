/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <ccalabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:45:23 by ccalabro          #+#    #+#             */
/*   Updated: 2024/09/22 19:02:15 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_putnbrxlow(unsigned int n, int *ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_putnbrxlow(n / 16, ptr);
	*ptr += ft_putchar(base[(n % 16)]);
	return (*ptr);
}

int	ft_putnbrxup(unsigned int n, int *ptr)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbrxup(n / 16, ptr);
	*ptr += ft_putchar(base[(n % 16)]);
	return (*ptr);
}

int	ft_putptr(unsigned long long int n, int *ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
		ft_putptr(n / 16, ptr);
	*ptr += ft_putchar(base[(n % 16)]);
	return (*ptr);
}

int	ft_putptrc(void *p)
{
	unsigned long long int	n;
	int						ret;

	n = (unsigned long long)p;
	ret = 0;
	ret = ft_putptr(n, &ret);
	return (ret);
}
