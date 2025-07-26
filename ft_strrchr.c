/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:04:07 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/26 17:21:16 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return ((char *)last);
}

/*int	main(void)
{
	char	*string;
	int		c;

	string = "Hey, listening";
	c = 'n';
	printf("%s", ft_strrchr(string, c));
	return (0);
}*/