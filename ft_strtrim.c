/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:36:11 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 21:37:01 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contain_ch(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	trim_helper(char const *s1, char const *set, int index)
{
	char	*tmp;
	int		i;

	tmp = (char *)s1;
	if (index == 0)
	{
		i = 0;
		while (ft_contain_ch(tmp[i], set))
		{
			if (!tmp[i])
				break ;
			i++;
		}
	}
	else
	{
		i = index;
		while (ft_contain_ch(tmp[i], set))
		{
			i--;
			if (i == 0)
				break ;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*ans;

	if (!s1)
		return (NULL);
	if (!s1 && !set)
		return (NULL);
	if (!set)
		return ((char *)(s1));
	len = ft_strlen(s1);
	start = trim_helper(s1, set, 0);
	if (start == len)
		return (ft_strdup(""));
	end = trim_helper(s1, set, len - 1);
	if (end < start)
		return (ft_strdup(""));
	ans = (char *)ft_calloc((end - start + 2), sizeof(char));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, &s1[start], (end - start + 2));
	return (ans);
}
