/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:56:09 by thais.fer         #+#    #+#             */
/*   Updated: 2025/11/16 18:00:29 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

const char	*ft_parse_format(const char *format, t_flags *spec)
{
	*spec = ft_init_specifier();
	format++;
	format = ft_parse_flags(format, spec);
	format = ft_parse_width(format, spec);
	format = ft_parse_precision(format, spec);
	format = ft_parse_specifier(format, spec);
	return (format);
}
