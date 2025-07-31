/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:56:18 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/31 11:32:50 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*str;

	str = dest;
	while (count > 0)
	{
		*str = c;
		str++;
		count--;
	}
	return ((void *)dest);
}
