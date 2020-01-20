/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:12:46 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:33:35 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

struct		flags
{
	int		signe;
	int		zero;
	int		width;
	int		precision;
	char	type;
	int		end;
};

int			ft_printf(char *str,
				...) __attribute__((format(printf,1,2)));

//fonctions parcing type
void		ft_printf_s(va_list list, char **res);
void		ft_printf_c(va_list list, char **res);
void		ft_printf_d(va_list list, char **res, struct flags *flag);
void		ft_printf_100(char **res);
void		ft_printf_x(va_list list, char **res, struct flags *flag);
void		ft_printf_x_upper(va_list list, char **res, struct flags *flag);
void		ft_printf_u(va_list list, char **res, struct flags *flag);
void		ft_printf_p(va_list list, char **res, struct flags *flag);

//fonctions apply
char		*apply_zero(char *prec, int len_prec, char *str);
char		*apply_width(char *str, struct flags *flag);
char		*apply_precision(char *str, struct flags *flag);

//fonction combinaisons
char		*ft_zero_pres(char *str, struct flags *flag);
char		*ft_zero_width(char *str, struct flags *flag);
char		*width_precision(char *str, struct flags *flag);

//fonctions flags
int			init_struct_flags(struct flags *new, char *str, va_list list);
void		ft_init_struct_flags2(char *str, struct flags *new);
void		ft_init_struct_flags3(char *str, struct flags *new, va_list list, int i);
char		ft_recuptype(char *str, char *type);
int			ft_recupend(const char *str, const char *type);
int			ft_count(const char *str, int start);

//fonctions includes
int			ft_traitement(va_list list, struct flags *flag, char **ret);
int			ft_test_type(struct flags *flag, char *str);
char		*ft_long_itoa_base(unsigned long n, char *base);
char		*ft_long_itoa(long int n);
char		*ft_itoa_base(long n, char *base);
void		ft_putnbr_u(int n);

#endif
