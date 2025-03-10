/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 18:06:22 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 'z')
		return (0);
	if (c < '0')
		return (0);
	if ((c > '9') & (c < 'A'))
		return (0);
	if ((c > 'Z') & (c < 'a'))
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
// 		if (isalnum(i) != ft_isalnum(i))
// 		{
// 			printf("error in %d", i);
// 		}
// 		i++;
// 	}
// 	printf("passed isalnum!");
// }
