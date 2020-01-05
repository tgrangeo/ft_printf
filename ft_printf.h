/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:12:46 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/02 17:18:10 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

struct		type
{
	int		type;
	char	tab_i[10];
	void	(*ft[8])(va_list *, char **);

};

struct		flags
{
	int		signe;
	int		zero;
	int		width;
	int		precision;
	char	type;
	int		end;
};


int			ft_find_index(char c, struct type *new);
int			ft_printf(char *str,
				...) __attribute__((format(printf,1,2)));
char		*ft_itoa_base(unsigned long n, char *base);
void		ft_putnbr_u(int n);
void		ft_init_struct(struct type *new);
void		ft_printf_s(va_list *list, char **res);
void		ft_printf_c(va_list *list, char **res);
void		ft_printf_d(va_list *list, char **res);
void		ft_printf_100(char **res);
void		ft_printf_x(va_list *list, char **res);
void		ft_printf_x_upper(va_list *list, char **res);
void		ft_printf_u(va_list *list, char **res);
void		ft_tabft(struct type *new);
void		ft_tab_i(struct type *new);
void		ft_printf_p(va_list *s_list, char **res);
char		*ft_recup(char *str, int start);
char		*ft_traitement(struct type *print, va_list *list, struct flags *flag);
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

#endif
