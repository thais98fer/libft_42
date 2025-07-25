/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:19:34 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/23 09:31:25 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf ("a - %d\n", ft_isascii('a'));
	printf ("5 - %d\n", ft_isascii('5'));
	printf ("B - %d\n", ft_isascii('B'));
	printf ("~ - %d\n", ft_isascii('~'));
	printf ("0 - %d\n", ft_isascii('0'));
	printf ("  - %d\n", ft_isascii(' '));
	printf ("( - %d\n", ft_isascii('('));
	printf ("| - %d\n", ft_isascii('|'));
	printf ("/ - %d\n", ft_isascii('/'));
	printf ("128 - %d\n", ft_isascii(128));
	printf ("\n");
	return (0);
}*/
