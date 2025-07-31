/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:03:36 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/31 11:32:10 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *dest, size_t count)
{
	char	*str;
	size_t	i;

	str = dest;
	i = 0;
	while (i < count)
	{
		str[i] = 0;
		i++;
	}
}
