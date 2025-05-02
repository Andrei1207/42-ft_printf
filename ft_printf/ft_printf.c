/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciobanu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:00:34 by aciobanu          #+#    #+#             */
/*   Updated: 2025/01/22 16:02:27 by aciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_percent(void)
{
	ft_putchar('%');
	return (1);
}

int	formats(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_ptr(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_printhex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_percent());
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	int		result;
	int		i;
	va_list	args;

	va_start(args, format);
	result = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			result += formats(args, format[i + 1]);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (result);
}
/*
int	main(void)
{
	unsigned int a = -4895734;
	ft_printf("%u", a);
	return (0);
}*/
