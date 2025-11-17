/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thais.fer <thais.fer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:00:48 by thfernan          #+#    #+#             */
/*   Updated: 2025/11/16 17:56:55 by thais.fer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_flags
{
	int	minus;
	int	plus;
	int	zero;
	int	dot;
	int	hash;
	int	space;
	int	width;
	int	specifier;
}		t_flags;

int			ft_printf(const char *format, ...);
int			ft_putchar(char c);
int			ft_check_char(t_flags *spec, int c);
int			ft_putnbr_base(unsigned long nbr, int base, int upper);
int			ft_putnbr_signed(int nbr);
int			ft_putnbr_unsigned(unsigned int nbr);
int			ft_putnbr_hex(unsigned int nbr, int upper);
int			ft_putstr(char *s);
int			ft_putnstr(char *s, int n);
size_t		ft_strlen(const char *str);
t_flags		ft_init_specifier(void);
const char	*ft_parse_flags(const char *format, t_flags *spec);
const char	*ft_parse_width(const char *format, t_flags *spec);
const char	*ft_parse_precision(const char *format, t_flags *spec);
const char	*ft_parse_specifier(const char *format, t_flags *spec);
const char	*ft_parse_format(const char *format, t_flags *spec);
int			ft_padding(char c, int n);
int			ft_numlen_signed(long n);
int			ft_numlen_base(unsigned long n, int base);
int			ft_numlen_hex(unsigned long n);
int			ft_check(t_flags *spec, va_list args);
int			ft_check_int(t_flags *spec, int n);
int			ft_check_ptr(t_flags *spec, void *ptr);
int			ft_check_unsigned(t_flags *spec, unsigned int n);
int			ft_check_hex(t_flags *spec, unsigned int n, int upper);
int			ft_check_string(t_flags *spec, char *str);
char		ft_get_pad_char(t_flags *spec);
char		ft_get_fill_char(t_flags *spec);
int			ft_calc_zeros(int n, t_flags *spec);
int			ft_calc_zeros_unsigned(unsigned long n, t_flags *spec);
int			ft_calc_padding(int n, t_flags *spec, int zeros);
int			ft_calc_padding_unsigned(unsigned long n, t_flags *spec, int zeros);
int			ft_calc_padding_hex(unsigned int n, t_flags *spec, int zeros);
int			ft_calc_zeros_hex(unsigned int n, t_flags *spec);
int			ft_calc_zeros_ptr(unsigned long ptr, t_flags *spec);
int			ft_calc_padding_ptr(unsigned long ptr, t_flags *spec, int zeros);
int			ft_putsign(int n, t_flags *spec);
int			ft_putzeros(int n);
int			ft_nbr_abs(int n);
int			ft_put_hex_prefix(t_flags *spec, int n, int upper);
int			ft_calc_padding_str(t_flags *spec, int len);
int			ft_get_strlen_null(t_flags *spec, char **str);

#endif