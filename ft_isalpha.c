/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:34:59 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/10 17:42:10 by chunchen         ###   ########.fr       */
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
// int	main()
// {
// 	printf("%d\n", ft_isalpha(' '));
// 	printf("%d\n", ft_isalpha('\r'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d\n", ft_isalpha('z'));
// }
