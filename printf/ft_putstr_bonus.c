/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:24:07 by thais.fer         #+#    #+#             */
/*   Updated: 2025/11/16 18:02:36 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_check_string(t_flags *spec, char *str)
{
	int	total_len;
	int	len;
	int	padding;

	total_len = 0;
	len = ft_get_strlen_null(spec, &str);
	if (spec->dot >= 0 && spec->dot < len)
		len = spec->dot;
	padding = ft_calc_padding_str(spec, len);
	if (!spec->minus)
		total_len += ft_padding(' ', padding);
	total_len += ft_putnstr(str, len);
	if (spec->minus)
		total_len += ft_padding(' ', padding);
	return (total_len);
}

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}

int	ft_putnstr(char *s, int n)
{
	int	count;

	count = 0;
	if (n <= 0 || s == NULL)
		return (0);
	while (*s && n > 0)
	{
		count += ft_putchar(*s);
		s++;
		n--;
	}
	return (count);
}

int	ft_calc_padding_str(t_flags *spec, int len)
{
	int	pad;

	pad = spec->width - len;
	if (pad < 0)
		pad = 0;
	return (pad);
}
