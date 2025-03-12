/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:08:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 02:50:10 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp;
	unsigned char	*tmp_p;
	size_t			i;

	i = 0;
	tmp_p = (unsigned char *)(s);
	tmp = (unsigned char)(c);
	while (i < n)
	{
		if (tmp_p[i] == tmp)
			return ((void *)(&tmp_p[i]));
		i++;
	}
	return (NULL);
}
