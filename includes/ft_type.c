/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:59:32 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 14:54:59 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_s(va_list list, char **res)
{
	char	*str;

	str = va_arg(list, char*);
	if (str != NULL)
	{
		*res = ft_strdup(str);
	}
	else
		*res = ft_strdup("(null)");
}

void		ft_printf_c(va_list list, char **res)
{
	char	c;
	char	str[2];

	c = va_arg(list, int);
	if (c == '\0')
		*res = ft_strdup("");
	else
	{
		str[0] = c;
		str[1] = 0;
		*res = ft_strdup(str);
	}
}

void		ft_printf_d(va_list list, char **res, t_flags *flag)
{
	int d;

	d = va_arg(list, int);
	if (d == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_itoa(d);
}

void		ft_printf_100(char **res)
{
	*res = ft_strdup("%");
}

void		ft_printf_u(va_list list, char **res, t_flags *flag)
{
	unsigned int d;

	d = va_arg(list, unsigned int);
	if (d == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_long_itoa(d);
}
