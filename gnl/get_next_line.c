/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:55:39 by thais.fer         #+#    #+#             */
/*   Updated: 2025/09/10 17:32:51 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = extract_line(&buffer);
	return (line);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total_len = (ft_strlen(s1) + ft_strlen(s2));
	if (total_len < ft_strlen(s1) || total_len < ft_strlen(s2))
		return (NULL);
	new_str = (char *)malloc(total_len + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	return (new_str);
}
