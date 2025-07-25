/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:16:17 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/25 18:42:56 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count);

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*temp_d;
	const unsigned char	*temp_s;

	temp_d = (unsigned char *)dest;
	temp_s = (const unsigned char *)src;
	if (temp_d == temp_s || count == 0)
		return (dest);
	if (temp_d > temp_s && temp_d < temp_s + count)
	{
		while (count--)
		temp_d[count] = temp_s[count];
	}
	else
	{
		ft_memcpy(dest, src, count);
	}
	return (dest);
}
