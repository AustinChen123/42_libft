/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:56:58 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 09:57:56 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*buf;
	char	*start;
	int		len;

	len = ft_strlen(src);
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	start = buf;
	while (*src)
	{
		*buf = *src;
		buf++;
		src++;
	}
	*buf = '\0';
	return (start);
}
