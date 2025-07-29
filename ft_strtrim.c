/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:21:18 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/29 17:19:20 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	length;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strrchr(set, s1[end -1]))
		end--;
	length = end - start;
	new_str = (char *)malloc(length + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + start, length + 1);
	return (new_str);
}
