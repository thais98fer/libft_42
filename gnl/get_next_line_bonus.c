/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:31:13 by thfernan          #+#    #+#             */
/*   Updated: 2026/01/03 16:23:03 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_buffer(int fd, char *buffer)
{
	char	*temp;
	ssize_t	bytes;

	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && (!buffer || !ft_strchr(buffer, '\n')))
	{
		bytes = read(fd, temp, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		temp[bytes] = '\0';
		buffer = join_buffers(buffer, temp);
		if (!buffer)
			break ;
	}
	free(temp);
	if (bytes < 0 || !buffer)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

char	*join_buffers(char *buffer, char *temp)
{
	char	*old_buffer;

	if (!buffer)
		return (ft_strdup(temp));
	old_buffer = buffer;
	buffer = ft_strjoin(buffer, temp);
	free(old_buffer);
	return (buffer);
}

char	*extract_line(char **buffer)
{
	char	*line;
	char	*new_line;
	char	*old_buffer;
	size_t	length;

	new_line = ft_strchr(*buffer, '\n');
	if (new_line)
	{
		length = new_line - *buffer + 1;
		line = ft_substr(*buffer, 0, length);
		old_buffer = *buffer;
		if (*(new_line + 1))
			*buffer = ft_strdup(new_line + 1);
		else
			*buffer = NULL;
		free(old_buffer);
	}
	else
	{
		line = ft_strdup(*buffer);
		free(*buffer);
		*buffer = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer[FD];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD)
		return (NULL);
	buffer[fd] = read_buffer(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = extract_line(&buffer[fd]);
	return (line);
}
