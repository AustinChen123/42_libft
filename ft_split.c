/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:08:27 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 16:36:17 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && (*s != c))
				s++;
		}
	}
	return (count);
}

static char	*init(const char *s, char c, char ***splits, int *num_str)
{
	char	*trimmed;

	trimmed = ft_strtrim(s, &c);
	*num_str = 0;
	*splits = ft_calloc(count_split(trimmed, c) + 1, sizeof(char *));
	return (trimmed);
}

char	**ft_split(char const *s, char c)
{
	int		num_str;
	char	**splits;
	char	*start;
	char	*trimmed;

	trimmed = init(s, c, &splits, &num_str);
	if (!splits)
		return (NULL);
	if (count_split(trimmed, c) == 0)
		return (splits);
	while (*trimmed)
	{
		while (*trimmed == c)
			trimmed++;
		start = (char *)trimmed;
		while (*trimmed && (*trimmed != c))
			trimmed++;
		splits[num_str] = ft_calloc(trimmed - start + 1, sizeof(char));
		if (!splits[num_str])
			return (NULL);
		ft_strlcpy(splits[num_str], start, trimmed - start + 1);
		num_str++;
	}
	return (splits);
}
