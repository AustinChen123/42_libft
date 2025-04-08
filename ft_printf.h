/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:13:11 by chunchen          #+#    #+#             */
/*   Updated: 2025/04/08 16:59:15 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_int_putchar(char c);
int		ft_int_putstr(char *s);
int		ft_int_putnbr(int nbr);
int		ft_int_putptr(void *ptr);
int		ft_int_putuint(unsigned int nbr);
int		ft_int_puthex(int nbr, int type);
int		ft_int_print_hex(unsigned long ptr);
int		*ft_get_error(void);
void	ft_set_error(int new_status);
#endif
