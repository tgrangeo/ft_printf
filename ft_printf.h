/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:12:46 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 13:27:33 by tgrangeo    ###    #+. /#+    ###.fr     */
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
char		*ft_itoa_base(unsigned long n, char *base);
void		ft_putnbr_u(int n);
void		ft_printf_s(va_list *list, char **res);
void		ft_printf_c(va_list *list, char **res);
void		ft_printf_d(va_list *list, char **res, struct flags *flag);
void		ft_printf_100(char **res);
void		ft_printf_x(va_list *list, char **res, struct flags *flag);
void		ft_printf_x_upper(va_list *list, char **res, struct flags *flag);
void		ft_printf_u(va_list *list, char **res, struct flags *flag);
void		ft_printf_p(va_list *s_list, char **res, struct flags *flag);
char		*ft_recup(char *str, int start);
int			ft_traitement(va_list *list, struct flags *flag, char **ret);
int			ft_recupend(const char *str, const char *type);
int			ft_count(const char *str, int start);
char		*apply_width(char *str, struct flags *flag);
char		*ft_long_itoa(long int n);
int			init_struct_flags(struct flags *new, char *str, va_list *list);
char		ft_recuptype(char *str, char *type);
char		*apply_precision(char *str, struct flags *flag);
char		*ft_duix(char *str, struct flags *flag, int len);
char		*ft_neg(char *prec, int len_prec, char *str);
char		*width_precision(char *str, struct flags *flag);
char		*apply_neg_width(char *str, struct flags *flag);
char		*ft_zero_width(char *str, struct flags *flag);
char		*ft_long_itoa_base(unsigned long n, char *base);
void		ft_init_struct_flags2(char *str, struct flags *new);
void		ft_init_struct_flags3(char *str, struct flags *new, va_list *list, int i);
char		*ft_send(struct flags *flag, char **ret, va_list *list);
int			ft_test_type(struct flags *flag, char *str);
char		*ft_zero_pres(char *str, struct flags *flag);

#endif
