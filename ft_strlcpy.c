/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 00:10:40 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 < dstsize)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (len);
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
