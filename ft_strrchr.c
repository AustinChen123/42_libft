/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:08:15 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 09:39:51 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp;
	int		i;
	char	*ans;

	ans = NULL;
	tmp = (char)(c);
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp)
			ans = (char *)(&s[i]);
		i++;
	}
	if (s[i] == tmp)
		ans = (char *)(&s[i]);
	return (ans);
}
