/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:48:37 by thfernan          #+#    #+#             */
/*   Updated: 2025/08/05 10:19:17 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char		*str;
	const char	*source;
	size_t		i;

	str = (char *)dest;
	source = (const char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < count)
	{
		str[i] = source[i];
		i++;
	}
	return (dest);
}
