/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/11 16:30:55 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	if (!dst || !src)
		return ;
	temp_d = (char *)dst;
	temp_s = (char *)src;
	i = 0;
	if (temp_d > temp_s)
	{
		while (n-- > 0)
		{
			temp_d[n] = temp_s[n];
		}
	}
	else
	{
		while (i < n)
		{
			temp_d[i] = temp_s[i];
			i++;
		}
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*dist = malloc(20);
// 	char	*src = "4222222";
// 	int		i = 0;

// 	memmove(dist, src, 2);
// 	printf("mem: %s\n", dist);
// 	ft_memmove(dist, src, 4);
// 	printf("mem: %s\n", dist);
// 	free(dist);
// 	printf("passed memmove");
// }
