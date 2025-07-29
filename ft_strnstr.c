/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:26:48 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/29 17:19:14 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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

/*int main(void)
{
	const char *s1 = "hello world";
	const char *s2 = "world";

	char *found = ft_strnstr(s1, s2, 11);
	if (found)
		printf("Encontrado: %s\n", found);
	else
		printf("Não encontrado\n");
	return (0);
}*/
