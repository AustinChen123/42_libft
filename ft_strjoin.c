/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:56:13 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/12 13:01:09 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ans;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ans = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (!ans)
		return (NULL);
	ft_memcpy(ans, s1, len_s1);
	ft_memcpy(&ans[len_s1], s2, len_s2);
	return (ans);
}
