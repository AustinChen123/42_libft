/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 17:44:54 by chunchen         ###   ########.fr       */
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
// int	main()
// {
// 	printf("%d\n", ft_isalnum(' '));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('z'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('['));
// }
