/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:08:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 03:01:06 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_1;
	unsigned char	*tmp_2;
	size_t			i;

	i = 0;
	tmp_1 = (unsigned char *)(s1);
	tmp_2 = (unsigned char *)(s2);
	while (i < n)
	{
		if (tmp_1[i] != tmp_2[i])
			return (tmp_1[i] - tmp_2[i]);
		i++;
	}
	return (0);
}
