/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:35:53 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/18 16:04:15 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf ("a - %d\n", ft_isprint('a'));
	printf ("5 - %d\n", ft_isprint('5'));
	printf ("B - %d\n", ft_isprint('B'));
	printf ("~ - %d\n", ft_isprint('~'));
	printf ("0 - %d\n", ft_isprint('0'));
	printf ("  - %d\n", ft_isprint(' '));
	printf ("( - %d\n", ft_isprint('('));
	printf ("| - %d\n", ft_isprint('|'));
	printf ("/ - %d\n", ft_isprint('/'));
	printf ("NULL - %d\n", ft_isprint('\0'));
	printf ("\n");
	return (0);
}*/