/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:01:54 by thfernan          #+#    #+#             */
/*   Updated: 2025/08/05 10:20:14 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t length)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (length == 0)
		return (count);
	while (src[index] != '\0' && index < length - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count);
}
