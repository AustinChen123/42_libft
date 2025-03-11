/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 00:37:47 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	if (d_len > dstsize)
		d_len = dstsize;
	if (d_len == dstsize)
		return (dstsize + s_len);
	if (s_len < dstsize - d_len)
	{
		ft_memcpy(&dst[d_len], src, s_len + 1);
	}
	else
	{
		ft_memcpy(&dst[d_len], src, (dstsize - d_len - 1));
		dst[dstsize - 1] = '\0';
	}
	return (d_len + s_len);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*dist = malloc(20);
// 	char	*src = "4222222";
// 	int		i = 0;

// 	strlcpy(dist, src, 2);
// 	printf("mem: %s\n", dist);
// 	ft_strlcpy(dist, src, 4);
// 	printf("mem: %s\n", dist);
// 	free(dist);
// 	printf("passed memmove");
// }
