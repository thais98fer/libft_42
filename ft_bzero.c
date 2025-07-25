/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:03:36 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/19 15:11:13 by thfernan         ###   ########.fr       */
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

/*int	main(void)
{
	char	str[10] = "123456789";
	int	i;

	ft_bzero(str, 5);
	for (i = 0; i < 10; i++)
	{
		printf("str[%d] = %c\n", i, str[i]);
	}
	return (0);
}*/