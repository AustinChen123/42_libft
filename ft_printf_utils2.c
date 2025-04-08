/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:39:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/04/08 16:58:47 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_puthex(int nbr, int type)
{
	int				len;
	char			*hex;
	unsigned int	u_nbr;

	len = 0;
	u_nbr = (unsigned int)nbr;
	if (type == 1)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (u_nbr < 16)
		len += ft_int_putchar(hex[u_nbr]);
	else
	{
		len += ft_int_puthex(u_nbr / 16, type);
		len += ft_int_puthex(u_nbr % 16, type);
	}
	return (len);
}

int	ft_int_print_hex(unsigned long ptr)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
		len += ft_int_print_hex(ptr / 16);
	len += ft_int_putchar(hex[ptr % 16]);
	return (len);
}

int	*ft_get_error(void)
{
	static int	status = 0;

	return (&status);
}

void	ft_set_error(int new_status)
{
	int	*status;

	status = ft_get_error();
	*status = new_status;
}
