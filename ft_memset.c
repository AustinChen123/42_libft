/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 09:52:41 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)(b);
	while (i < len)
	{
		temp[i] = (unsigned char)(c);
		i++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char *b = malloc(20);
// 	if (memset(b, '2', 4) != ft_memset(b, '2', 4))
// 	{
// 		printf("error in memset");
// 	}
// 	memset(b, '2', 20);
// 	printf("standard: %s\n", b);
// 	ft_memset(b, '4', 10);
// 	printf("ft_version: %s\n", b);
// 	printf("passed memset!");
// 	free(b);
// }
