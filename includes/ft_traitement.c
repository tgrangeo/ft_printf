/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_traitement.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 16:07:56 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 23:00:19 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

static char		*ft_send(t_flags *flag, char **ret, va_list list)
{
	if (flag->type == 'd')
		ft_printf_d(list, ret, flag);
	else if (flag->type == 's')
		ft_printf_s(list, ret);
	else if (flag->type == 'x')
		ft_printf_x(list, ret, flag);
	else if (flag->type == 'X')
		ft_printf_x_upper(list, ret, flag);
	else if (flag->type == 'u')
		ft_printf_u(list, ret, flag);
	else if (flag->type == 'i')
		ft_printf_d(list, ret, flag);
	else if (flag->type == 'p')
		ft_printf_p(list, ret, flag);
	else if (flag->type == 'c')
		ft_printf_c(list, ret);
	else if (flag->type == '%')
		ft_printf_100(ret);
	return (*ret);
}

int				ft_traitement(va_list list, t_flags *flag, char **ret)
{
	int len;

	len = 0;
	*ret = ft_send(flag, ret, list);
	if (flag->width > 0 && flag->precision <= -2 && flag->zero == 0)
		*ret = apply_width(*ret, flag);
	else if (flag->zero > 0 && flag->width > 0 && flag->type == '%')
		*ret = ft_zero_width(*ret, flag);
	else if (flag->precision >= -1 && flag->width == 0)
		*ret = apply_precision(*ret, flag);
	else if (flag->precision >= -1 && flag->width > 0)
		*ret = width_precision(*ret, flag);
	else if (flag->width > 0 && flag->zero > 0 && flag->signe == 0)
		*ret = ft_zero_width(*ret, flag);
	else if (flag->precision >= -1 && flag->zero == 1 && flag->type != '%')
		*ret = ft_zero_pres(*ret, flag);
	if (flag->type == 'c' && *ret[0] == '\0')
		len++;
	else
		len = ft_strlen(*ret);
	return (len);
}
