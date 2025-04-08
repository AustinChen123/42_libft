/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:39:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/04/08 16:58:32 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putchar(char c)
{
	if (!(*ft_get_error()))
	{
		if (write(1, &c, 1) == -1)
		{
			ft_set_error(1);
			return (0);
		}
	}
	return (1);
}

int	ft_int_putstr(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (ft_int_putstr("(null)"));
	while (*s)
	{
		len += ft_int_putchar(*s);
		s++;
	}
	return (len);
}

int	ft_int_putptr(void *ptr)
{
	int			len;
	uintptr_t	ptr_nbr;
	char		*hex;

	len = 0;
	ptr_nbr = (uintptr_t) ptr;
	hex = "0123456789abcdef";
	len += ft_int_putstr("0x");
	if (ptr_nbr == 0)
	{
		len += ft_int_putchar('0');
		return (len);
	}
	len += ft_int_print_hex(ptr_nbr);
	return (len);
}

int	ft_int_putuint(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr < 10)
		len += ft_int_putchar(nbr + '0');
	else
	{
		len += ft_int_putuint(nbr / 10);
		len += ft_int_putuint(nbr % 10);
	}
	return (len);
}

int	ft_int_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
	{
		len += ft_int_putstr("-2147483648");
		return (len);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		len += ft_int_putchar('-');
	}
	if (nbr < 10)
		len += ft_int_putchar(nbr + '0');
	else
	{
		len += ft_int_putnbr(nbr / 10);
		len += ft_int_putnbr(nbr % 10);
	}
	return (len);
}
