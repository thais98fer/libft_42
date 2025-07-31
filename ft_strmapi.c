/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:12:10 by thais.fer         #+#    #+#             */
/*   Updated: 2025/07/30 11:25:01 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new_str = (char *)malloc(size + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
