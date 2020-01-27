/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libftprintf.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:12:46 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 13:58:43 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef struct	s_flags
{
	int		signe;
	int		zero;
	int		width;
	int		precision;
	char	type;
	int		end;
}				t_flags;

int				ft_printf(char *str,
				...) __attribute__((format(printf,1,2)));

/*
**fonctions parcing type
*/
void			ft_printf_s(va_list list, char **res);
void			ft_printf_c(va_list list, char **res);
void			ft_printf_d(va_list list, char **res, t_flags *flag);
void			ft_printf_100(char **res);
void			ft_printf_x(va_list list, char **res, t_flags *flag);
void			ft_printf_x_upper(va_list list, char **res, t_flags *flag);
void			ft_printf_u(va_list list, char **res, t_flags *flag);
void			ft_printf_p(va_list list, char **res, t_flags *flag);

/*
**fonctions apply
*/
char			*apply_zero(char *prec, int len_prec, char *str);
char			*apply_width(char *str, t_flags *flag);
char			*apply_precision(char *str, t_flags *flag);

/*
**fonctions flags
*/
char			*ft_zero_pres(char *str, t_flags *flag);
char			*ft_zero_width(char *str, t_flags *flag);
char			*width_precision(char *str, t_flags *flag);

/*
**fonctions struct
*/
int				init_struct_flags(t_flags *new, char *str, va_list list);
void			ft_init_struct_flags2(char *str, t_flags *new);
void			ft_init_struct_flags3(char *str, t_flags *new,
										va_list list, int i);
char			ft_recuptype(char *str, char *type);
int				ft_recupend(const char *str, const char *type);
int				ft_count(const char *str, int start);

/*
**fonctions includes
*/
int				ft_traitement(va_list list, t_flags *flag, char **ret);
int				ft_test_type(t_flags *flag, char *str);
char			*ft_long_itoa_base(unsigned long n, char *base);
char			*ft_long_itoa(long int n);
char			*ft_itoa_base(long n, char *base);
void			ft_putnbr_u(int n);

#endif
