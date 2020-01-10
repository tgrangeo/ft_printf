/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 11:34:34 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 11:50:43 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_s(va_list *list, char **res)
{
	char	*str;

	str = va_arg(*list, char *);
	if (str == NULL)
		*res = ft_strdup("(null)");
	else
		*res = ft_strdup(str);
}

void		ft_printf_c(va_list *list, char **res)
{
	char	c;
	char	str[2];

	c = va_arg(*list, int);
	if (c == '\0')
		*res = ft_strdup("");
	else
	{
		str[0] = c;
		str[1] = 0;
		*res = ft_strdup(str);
	}
}

void		ft_printf_d(va_list *list, char **res, struct flags *flag)
{
	int d;

	d = va_arg(*list, int);
	if (d == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_itoa(d);
}

void		ft_printf_100(char **res)
{
	*res = ft_strdup("%");
}

void		ft_printf_u(va_list *list, char **res, struct flags *flag)
{
	long int d;

	d = va_arg(*list, long int);
	if (d == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
		*res = ft_long_itoa(d);
}
