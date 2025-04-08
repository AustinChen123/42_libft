/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:04:03 by chunchen          #+#    #+#             */
/*   Updated: 2025/04/08 16:59:07 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// cspdiuxX%
static int	handle_format(char format, va_list *args)
{
	int	len;

	len = 0;
	if (!args)
		return (-1);
	if (format == 'c')
		return (ft_int_putchar((unsigned char)va_arg(*args, unsigned int)));
	else if (format == 's')
		return (ft_int_putstr(va_arg(*args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_int_putnbr(va_arg(*args, int)));
	else if (format == 'u')
		return (ft_int_putuint(va_arg(*args, unsigned int)));
	else if (format == 'x')
		return (ft_int_puthex(va_arg(*args, int), 1));
	else if (format == 'X')
		return (ft_int_puthex(va_arg(*args, int), 0));
	else if (format == 'p')
		return (ft_int_putptr(va_arg(*args, void *)));
	else if (format == '%')
		return (ft_int_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	va_start(args, format);
	ft_set_error(0);
	len = 0;
	while (*format)
	{
		if (*format == '%')
			len += handle_format(*(++format), &args);
		else
			len += ft_int_putchar(*format);
		if (*(ft_get_error()) == 1)
		{
			va_end(args);
			return (-1);
		}
		format++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>
// int	main()
// {
// 	// ft_printf("char:%c\n", 'c');
// 	// ft_printf("str%s\n", "42");
// 	// ft_printf("ptr:%p\n", &"c");
// 	// ft_printf("digit:%d\n", 100);
// 	// ft_printf("int:%i\n", 100);
// 	// ft_printf("unsigned int:%u\n", 100);
// 	// ft_printf("hex:%x\n", 100);
// 	// ft_printf("heX:%X\n", 100);
// 	// ft_printf("%%");
// }
