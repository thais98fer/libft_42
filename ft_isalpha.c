/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:51:35 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/18 14:21:25 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{	
	printf ("a - %d\n", ft_isalpha('a'));
	printf ("5 - %d\n", ft_isalpha('5'));
	printf ("B - %d\n", ft_isalpha('B'));
	printf ("\n");
	return (0);
}*/