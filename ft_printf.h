/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:12:46 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 18:54:30 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

struct		s_printf
{
	int		i_conv;
	char	tab_i[10];
	void	(*ft[8])(va_list *, char **);
	int		width;

};

struct		flags
{
	int		signe;
	int		zero;
	int		width;
	int		precision;
	char	type;
};


int			ft_find_index(char c, struct s_printf *new);
int			ft_printf(char *str,
				...) __attribute__((format(printf,1,2)));
char		*ft_itoa_base(long int n, char *base);
void		ft_putnbr_u(int n);
void		ft_init_struct(struct s_printf *new);
void		ft_printf_s(va_list *list, char **res);
void		ft_printf_c(va_list *list, char **res);
void		ft_printf_d(va_list *list, char **res);
void		ft_printf_100(char **res);
void		ft_printf_x(va_list *list, char **res);
void		ft_printf_x_upper(va_list *list, char **res);
void		ft_printf_u(va_list *list, char **res);
void		ft_tabft(struct s_printf *new);
void		ft_tab_i(struct s_printf *new);
void		ft_printf_p(va_list *s_list, char **res);
char		*ft_recup(char *str, int start);
int			ft_traitement(char *str, struct s_printf *print, va_list *list);
int			ft_recupend(const char *str, const char *type);
int			ft_count(const char *str, int start);
char		*apply_width(char *str, struct flags *flag);
char		*ft_long_itoa(long int n);
void		init_struct_flags(struct flags *new, char *str, va_list *list);
char		ft_recuptype(char *str, char *type);

#endif
