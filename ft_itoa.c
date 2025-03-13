/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:49:09 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 22:52:32 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

static void	num_assign(int sign, int *len, int *n, char **ans)
{
	if (sign == -1)
	{
		*ans[0] = '-';
		while (*n != 0)
		{
			(*ans)[*len - 1] = (char)(sign * *n % 10 + '0');
			*n = *n / 10;
			*len = *len - 1;
		}
	}
	else
	{
		while (*n != 0)
		{
			(*ans)[*len - 1] = (char)(*n % 10 + '0');
			*n = *n / 10;
			*len = *len - 1;
		}
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*ans;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = int_len(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	if (sign == -1)
		len = len + 1;
	ans = ft_calloc(len + 1, sizeof(char));
	if (!ans)
		return (NULL);
	num_assign(sign, &len, &n, &ans);
	return (ans);
}
