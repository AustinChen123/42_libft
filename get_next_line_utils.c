/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:13:23 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/20 16:35:32 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*temp_d;
	char	*temp_s;

	if (!dst && !src)
		return (dst);
	temp_d = (char *)dst;
	temp_s = (char *)src;
	i = 0;
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*buf;
	char	*start;
	int		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	buf = malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	start = buf;
	while (*src)
	{
		*buf = *src;
		buf++;
		src++;
	}
	*buf = '\0';
	return (start);
}

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	int		i;
	char	*ans;

	if (!s)
		return (NULL);
	ans = NULL;
	tmp = (char)(c);
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp)
			return ((char *)(&s[i]));
		i++;
	}
	if (s[i] == tmp)
		return ((char *)(&s[i]));
	return (ans);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ans;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup((char *)s2));
	if (!s2)
		return (ft_strdup((char *)s1));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	ans = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	ans[(len_s1 + len_s2)] = '\0';
	ft_memcpy(ans, s1, len_s1);
	ft_memcpy(&ans[len_s1], s2, len_s2);
	return (ans);
}
