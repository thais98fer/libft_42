/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:32:51 by thais.fer         #+#    #+#             */
/*   Updated: 2025/09/10 15:46:22 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}

size_t	ft_strlcpy_gnl(char *dest, const char *src, size_t length)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (length > 0)
	{
		while (src[i] && i < length - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	size_t	length;
	char	*copy;

	length = ft_strlen(src);
	copy = malloc(sizeof(char) * (length + 1));
	if (!copy)
		return (NULL);
	else
		ft_strlcpy_gnl(copy, src, length + 1);
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*str;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy_gnl(str, s + start, len + 1);
	return (str);
}
