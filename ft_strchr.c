/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:08:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 01:15:05 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	tmp;
	char			*tmp_p;

	if (s)
		tmp_p = (char *)(s);
	else
		return (NULL);
	tmp = (unsigned char)(c);
	while (*tmp_p)
	{
		if (*tmp_p == tmp)
			return (tmp_p);
		tmp_p++;
	}
	if (c == '\0')
		return (tmp_p);
	return (NULL);
}
