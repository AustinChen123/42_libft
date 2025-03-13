/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 22:56:11 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 23:17:17 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ans;

	i = 0;
	len = ft_strlen(s);
	ans = ft_calloc(len + 1, sizeof(char));
	if (!ans)
		return (NULL);
	while (i < len)
	{
		ans[i] = (*f)(i, s[i]);
		i++;
	}
	return (ans);
}
