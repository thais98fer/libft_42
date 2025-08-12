/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 09:39:12 by thais.fer         #+#    #+#             */
/*   Updated: 2025/07/31 11:34:59 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		is_neg;
	long	long_nbr;

	if (n == 0)
		return (ft_strdup("0"));
	long_nbr = n;
	is_neg = (long_nbr < 0);
	if (is_neg)
		long_nbr = -long_nbr;
	size = count_digits(long_nbr) + is_neg;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (long_nbr > 0)
	{
		size--;
		str[size] = (long_nbr % 10) + '0';
		long_nbr = long_nbr / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
