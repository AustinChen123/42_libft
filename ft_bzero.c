/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 19:50:05 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	*b = malloc(20);
// 	int		i = 0;

// 	memset(b, 1, 20);
// 	// bzero(b, 10);
// 	ft_bzero(b, 10);
// 	while (i < 10)
// 	{
// 		if (b[i] != 0)
// 		{
// 			printf("error in bzero");
// 			return (1);
// 		}
// 		i++;
// 	}
// 	free(b);
// 	printf("passed bzero");
// }
