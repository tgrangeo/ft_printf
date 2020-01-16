/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type2.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 11:39:37 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:01:23 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_x_upper(va_list list, char **res, struct flags *flag)
{
	char			*str;
	long int	n;

	n = va_arg(list, long int);
	//dprintf(1, "[%lu]:", n);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
	{
		str = ft_itoa_base(n, "0123456789ABCDEF");
		*res = ft_strdup(str);
	}
}

void		ft_printf_x(va_list list, char **res, struct flags *flag)
{
	long int	n;
	char			*str;

	n = va_arg(list, long int);
	//dprintf(1, "[%lu]:", n);
	if (n == 0 && (flag->precision == -1 || flag->precision == 0))
		*res = ft_strdup("");
	else
	{
		str = ft_itoa_base(n, "0123456789abcdef");
		*res = ft_strdup(str);
	}
}

void		ft_printf_p(va_list list, char **res, struct flags *flag)
{
	unsigned long	n;
	char			*str;
	char			*s;

	str = NULL;
	n = va_arg(list, unsigned long);
	s = ft_itoa_base(n, "0123456789abcdef");
	//printf("s:%s\n", s);
	if (flag->precision == -1 && n == 0)
		str = ft_strdup("0x");
	else
		str = ft_strjoin("0x", s);
	*res = ft_strdup(str);
}
