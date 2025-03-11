/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/11 23:42:53 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 126)
		return (0);
	if (c < 32)
		return (0);
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	int	i = 0;

// 	while (i < 128)
// 	{
// 		if (isprint(i) != ft_isprint(i))
// 		{
// 			printf("error in %d", i);
// 		}
// 		i++;
// 	}
// }
