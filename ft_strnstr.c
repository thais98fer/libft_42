/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:26:48 by thfernan          #+#    #+#             */
/*   Updated: 2025/08/05 10:20:29 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_size;

	if (*little == '\0')
		return ((char *)big);
	little_size = (ft_strlen(little));
	i = 0;
	while (big[i] && i + little_size <= len)
	{
		if (ft_strncmp(&big[i], little, little_size) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
