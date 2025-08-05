/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:53:49 by thfernan          #+#    #+#             */
/*   Updated: 2025/08/05 10:44:39 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	ft_free_all(char **result, int i)
{
	while (i > 0)
	{
		i--;
		free(result[i]);
	}
	free(result);
}

static int	ft_add_word(char **copy, const char *s, int start, int length)
{
	*copy = ft_substr(s, start, length);
	if (!*copy)
		return (0);
	return (1);
}

static int	ft_fill_array(char **new_str, const char *s, char c)
{
	const char	*start;
	const char	*ptr;
	int			i;
	int			len;

	start = NULL;
	ptr = s;
	i = 0;
	while (*ptr)
	{
		if (*ptr != c && start == NULL)
			start = ptr;
		if ((*ptr == c || *(ptr + 1) == '\0') && start != NULL)
		{
			len = ptr - start + (*ptr != c);
			if (!ft_add_word(&new_str[i], start, 0, len))
				return (0);
			i++;
			start = NULL;
		}
		ptr++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**out;

	if (!s)
		return (NULL);
	out = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!out)
		return (NULL);
	if (!ft_fill_array(out, s, c))
	{
		ft_free_all(out, ft_count_words(s, c));
		return (NULL);
	}
	return (out);
}
