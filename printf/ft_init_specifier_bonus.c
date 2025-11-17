/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_specifier_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:44:29 by thais.fer         #+#    #+#             */
/*   Updated: 2025/11/16 17:58:34 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_flags	ft_init_specifier(void)
{
	t_flags	spec;

	spec.minus = 0;
	spec.plus = 0;
	spec.zero = 0;
	spec.dot = -1;
	spec.hash = 0;
	spec.space = 0;
	spec.width = 0;
	spec.specifier = 0;
	return (spec);
}
