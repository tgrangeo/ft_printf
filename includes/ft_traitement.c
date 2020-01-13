/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_traitement.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 16:07:56 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 15:17:34 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_traitement(va_list *list, struct flags *flag, char **ret)
{
	int len;

	len = 0;
	*ret = ft_strdup("");
	*ret = ft_send(flag, ret, list);
	if (flag->width > 0 && flag->precision == -2 && flag->zero == 0)
		*ret = apply_width(*ret, flag);
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

char	*ft_send(struct flags *flag, char **ret, va_list *list)
{
	if (flag->type == 'd')
		ft_printf_d(list, ret, flag);
	if (flag->type == 's')
		ft_printf_s(list, ret);
	if (flag->type == 'x')
		ft_printf_x(list, ret, flag);
	if (flag->type == 'X')
		ft_printf_x_upper(list, ret, flag);
	if (flag->type == 'u')
		ft_printf_u(list, ret, flag);
	if (flag->type == 'i')
		ft_printf_d(list, ret, flag);
	if (flag->type == 'p')
		ft_printf_p(list, ret, flag);
	if (flag->type == 'c')
		ft_printf_c(list, ret);
	if (flag->type == '%')
		ft_printf_100(ret);
	return (*ret);
}

int		ft_count(const char *str, int start)
{
	int		i;
	int		t;
	char	*n;

	i = start;
	t = 0;
	n = NULL;
	while (ft_isdigit(str[i++]) > 0 && str[i])
		t++;
	n = ft_substr(str, start, t);
	t = atoi(n);
	free(n);
	return (t);
}
