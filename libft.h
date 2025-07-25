/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfernan <thfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:29:00 by thfernan          #+#    #+#             */
/*   Updated: 2025/07/25 18:57:20 by thfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, int c, size_t count);
void	ft_bzero(void *dest, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);
size_t	ft_strlcpy(char *dest, const char *src, size_t length);
size_t	ft_strlcat(char *dest, const char *src, size_t length);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
