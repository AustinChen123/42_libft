/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 03:47:26 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	if (!dst && !src)
		return (dst);
	temp_d = (char *)dst;
	temp_s = (char *)src;
	i = 0;
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*dist = malloc(5);
// 	char	*src = "4222222";
// 	int		i = 0;

// 	memcpy(dist, src, 2);
// 	printf("mem: %s\n", dist);
// 	ft_memcpy(dist, src, 4);
// 	printf("mem: %s\n", dist);
// 	free(dist);
// 	printf("passed memcpy");
// }
