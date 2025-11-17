/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:23:01 by thais.fer         #+#    #+#             */
/*   Updated: 2025/11/16 18:01:59 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_char(t_flags *spec, int c)
{
	int	padding;
	int	count;

	padding = 0;
	if (spec->width > 1)
		padding = spec->width - 1;
	count = 0;
	if (!spec->minus)
		count += ft_padding(' ', padding);
	count += ft_putchar((char)c);
	if (spec->minus)
		count += ft_padding(' ', padding);
	return (count);
}
