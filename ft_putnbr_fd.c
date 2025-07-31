/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:04:29 by thais.fer         #+#    #+#             */
/*   Updated: 2025/07/30 15:21:52 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	
	str = ft_itoa(n);
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	free(str);
}
