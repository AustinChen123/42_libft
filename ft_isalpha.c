/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 18:06:45 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c > 'z')
		return (0);
	if (c < 'A')
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
// 		if (isalpha(i) != ft_isalpha(i))
// 		{
// 			printf("error in %d", i);
// 		}
// 		i++;
// 	}
// 	printf("passed isalpha!");
// }
