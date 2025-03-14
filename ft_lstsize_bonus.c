/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:03:34 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/14 12:17:59 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*cur;

	len = 0;
	cur = lst;
	while (cur)
	{
		len++;
		cur = cur->next;
	}
	return (len);
}
