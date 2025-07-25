/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:48:37 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/25 10:20:00 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t count)
{
	char		*str;
	const char	*source;
	size_t		i;

	str = (char *) dest;
	source = (const char *) src;
	i = 0;
	while (i < count)
	{
		str[i] = source[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[9];
	char	str[] = "Psyduck";
	
	ft_memcpy(dest, str, 8);
	printf ("Dest = %s\n", dest);
	return (0);
}*/