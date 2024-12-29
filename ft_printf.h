/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalabro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:09:36 by ccalabro          #+#    #+#             */
/*   Updated: 2024/09/22 18:54:05 by ccalabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, int *ptr);
int		ft_putnbruns(unsigned int n, int *ptr);
int		ft_putnbrxlow(unsigned int n, int *ptr);
int		ft_putnbrxup(unsigned int n, int *ptr);
int		ft_putptr(unsigned long long int p, int *ptr);
int		ft_putptrc(void *p);
int		ft_printf(const char *str, ...);

#endif
