/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:22:24 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/23 13:40:43 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf ("a - %d\n", ft_isdigit('a'));
	printf ("5 - %d\n", ft_isdigit('5'));
	printf ("B - %d\n", ft_isdigit('B'));
	printf ("\n");
	return (0);
}*/