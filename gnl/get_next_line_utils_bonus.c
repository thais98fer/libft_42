/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:32:21 by thfernan          #+#    #+#             */
/*   Updated: 2026/01/04 17:57:37 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
