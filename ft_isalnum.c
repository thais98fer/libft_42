/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:10:02 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/23 13:42:24 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 48 && c <= 57) || (c >= 65 && c <= 90))
		|| ((c >= 97 && c <= 122)))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf ("a - %d\n", ft_isalnum('a'));
	printf ("5 - %d\n", ft_isalnum('5'));
	printf ("B - %d\n", ft_isalnum('B'));
	printf ("/ - %d\n", ft_isalnum('/'));
	printf ("\n");
	return (0);
}*/