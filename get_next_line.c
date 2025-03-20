/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chunchen <chunchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:13:23 by chunchen          #+#    #+#             */
/*   Updated: 2025/03/20 16:35:31 by chunchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join_free(char *read_buffer, char **remain)
{
	char	*temp;

	temp = ft_strjoin(*remain, read_buffer);
	free(*remain);
	*remain = temp;
	return (temp);
}

// if already got a newline
// extract the content and update
static char	*get_line(char **remain)
{
	char	*line;
	char	*temp;
	char	*new_line_ptr;
	size_t	i;

	i = 0;
	if (!*remain)
		return (NULL);
	new_line_ptr = ft_strchr(*remain, '\n');
	if (!new_line_ptr)
		return (NULL);
	line = malloc((new_line_ptr - *remain + 2) * sizeof(char));
	if (!line)
	{
		free(*remain);
		*remain = NULL;
		return (NULL);
	}
	ft_memcpy(line, *remain, (new_line_ptr - *remain + 1));
	line[new_line_ptr - *remain + 1] = '\0';
	temp = ft_strdup((new_line_ptr + 1));
	free(*remain);
	*remain = temp;
	return (line);
}

// if there's something, check if there's newline + extract
// or free ptr + return everything left.
// At beginning, there's already something
static char	*handle_remain(char **remain)
{
	char	*line;

	if (!*remain || !**remain)
	{
		free(*remain);
		*remain = NULL;
		return (NULL);
	}
	if (ft_strchr(*remain, '\n'))
		return (get_line(remain));
	line = ft_strdup(*remain);
	free(*remain);
	*remain = NULL;
	return (line);
}

static char	*read_file(int fd, char **remain)
{
	ssize_t		bytes_read;
	char		read_buffer[BUFFER_SIZE + 1];

	bytes_read = read(fd, read_buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		read_buffer[bytes_read] = '\0';
		if (!*remain)
			*remain = ft_strdup(read_buffer);
		else
			*remain = ft_join_free(read_buffer, remain);
		if (*remain && ft_strchr(read_buffer, '\n'))
			break ;
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
	{
		free(*remain);
		*remain = NULL;
	}
	return (handle_remain(remain));
}

// expected: return the line
// return NULL if fail
char	*get_next_line(int fd)
{
	static char	*remain[OPEN_MAX];
	char		*ans;

	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	if (remain[fd] && ft_strchr(remain[fd], '\n'))
		return (get_line(&remain[fd]));
	ans = read_file(fd, &remain[fd]);
	return (ans);
}
