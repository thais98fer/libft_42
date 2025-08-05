/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:05:08 by thais.fer         #+#    #+#             */
/*   Updated: 2025/08/05 10:19:56 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	length;
	char	*copy;

	length = ft_strlen(src);
	copy = malloc(sizeof(char) * (length + 1));
	if (!copy)
		return (NULL);
	else
		ft_strlcpy(copy, src, length + 1);
	return (copy);
}
