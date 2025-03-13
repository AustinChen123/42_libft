/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:08:27 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/13 23:48:37 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static int	init(int *index, char ***splits, char const *s, char c)
{
	*index = 0;
	*splits = ft_calloc(count_split(s, c) + 1, sizeof(char *));
	if (!*splits)
		return (1);
	if (count_split(s, c) == 0)
		return (2);
	return (0);
}

static int	str_check(int *index, int *start, const char *s, char c)
{
	while (s[*index] == c)
		*index = *index + 1;
	*start = *index;
	while (s[*index] && (s[*index] != c))
		*index = *index + 1;
	return (*index);
}

static void	free_splits(char ***splits, int num)
{
	while (num >= 0)
		free((*splits)[num--]);
	free(*splits);
	*splits = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		num_str;
	int		index;
	int		start;
	char	**splits;

	num_str = init(&index, &splits, s, c);
	if (num_str == 1)
		return (NULL);
	else if (num_str == 2)
		return (splits);
	while (s[index])
	{
		str_check(&index, &start, s, c);
		splits[num_str] = ft_calloc(index - start + 1, sizeof(char));
		if (!splits[num_str])
		{
			free_splits(&splits, num_str);
			return (NULL);
		}
		ft_strlcpy(splits[num_str], &s[start], index - start + 1);
		num_str++;
		if (num_str == count_split(s, c))
			break ;
	}
	return (splits);
}
