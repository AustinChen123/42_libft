/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:59:22 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 23:44:30 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (str_len < len)
		len = (str_len - start);
	if (str_len - start < len)
		len = (str_len - start);
	if (str_len < start)
		return (ft_strdup(""));
	ans = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ans)
		return (NULL);
	i = start;
	while (s[start] && ((i - start) < len))
	{
		ans[i - start] = s[i];
		i++;
	}
	return (ans);
}
