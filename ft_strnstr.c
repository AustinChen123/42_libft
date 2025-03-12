/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 03:02:37 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 03:49:06 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;
	size_t	i;
	char	*str;

	len_n = ft_strlen(needle);
	i = 0;
	str = (char *)haystack;
	if (len_n == 0)
		return (str);
	while (str[i] && (i < len))
	{
		if (i + len_n <= len)
			if (ft_strncmp(&str[i], needle, len_n) == 0)
				return (&str[i]);
		i++;
	}
	return (NULL);
}
