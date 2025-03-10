/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 17:51:02 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 127)
		return (0);
	if (c < 0)
		return (0);
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_isalnum('\x00'));
// 	printf("%d\n", ft_isalnum(-1));
// 	printf("%d\n", ft_isalnum(128));
// 	printf("%d\n", ft_isalnum('z'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('\x7f'));
// }
