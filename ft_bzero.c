/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:03:36 by thfernan          #+#    #+#             */
/*   Updated: 2025/08/05 10:15:08 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
