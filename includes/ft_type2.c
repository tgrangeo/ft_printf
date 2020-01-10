/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type2.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 11:39:37 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 11:53:02 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_x_upper(va_list *list, char **res, struct flags *flag)
{
	char			*str;
	unsigned long	n;

	n = va_arg(*list, unsigned long);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
	{
		str = ft_itoa_base(n, "0123456789ABCDEF");
		*res = ft_strdup(str);
	}
}

void		ft_printf_x(va_list *list, char **res, struct flags *flag)
{
	unsigned long	n;
	char			*str;

	n = va_arg(*list, unsigned long);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
	{
		str = ft_itoa_base(n, "0123456789abcdef");
		*res = ft_strdup(str);
	}
}

void		ft_printf_p(va_list *list, char **res)
{
	unsigned long	n;
	char			*str;
	char			*s;

	str = NULL;
	n = va_arg(*list, unsigned long);
	s = ft_long_itoa_base(n, "0123456789abcdef");
	if (n == 0)
		*res = ft_strdup("0x0");
	else
	{
		str = ft_strjoin("0x", s);
		*res = ft_strdup(str);
	}
}
