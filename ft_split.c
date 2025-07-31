/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:53:49 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/31 17:25:56 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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
	int	start;
	int	i;
	int	j;
	int	len;

	start = -1;
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c && start < 0)
			start = j;
		if ((s[j] == c || s[j + 1] == '\0') && start >= 0)
		{
			len = j - start + (s[j] != c);
			if (!ft_add_word(&new_str[i], s, start, len))
				return (0);
			i++;
			start = -1;
		}
		j++;
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
