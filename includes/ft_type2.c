/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type2.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 11:39:37 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:11:37 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_x_upper(va_list list, char **res, struct flags *flag)
{
	unsigned int			n;

	n = va_arg(list, unsigned int);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_itoa_base(n, "0123456789ABCDEF");
}

void		ft_printf_x(va_list list, char **res, struct flags *flag)
{
	unsigned int	n;

	n = va_arg(list, unsigned int);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_itoa_base(n, "0123456789abcdef");
}

void		ft_printf_p(va_list list, char **res, struct flags *flag)
{
	unsigned long	n;
	char			*s;
	char			*t;

	n = va_arg(list, unsigned long);
	t = ft_strdup("0x");
	s = ft_long_itoa_base(n, "0123456789abcdef");
	if (flag->precision == -1 && n == 0)
		*res = ft_strdup(t);
	else
		*res = ft_strjoin(t, s);
	free(s);
	free(t);
}
