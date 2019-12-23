/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_traitement.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 16:07:56 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/23 16:00:42 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_traitement(struct type *print, va_list *list, struct flags *flag)
{
	char	*ret;

	ret = ft_strdup("");
	print->type = ft_find_index(flag->type, print);
	if (print->type >= 0 && print->type <= 7)
		print->ft[print->type](list, &ret);
	else if (print->type > 7)
		ft_printf_100(&ret);
	if (flag->width > 0 && flag->precision == -2 && flag->zero == 0)
		ret = apply_width(ret, flag);
	if (flag->precision >= -1 && flag->width == 0)
		ret = apply_precision(ret, flag);
	if (flag->precision >= 0 && flag->width > 0)
		ret = width_precision(ret, flag);
	if (flag->width > 0 && flag->zero > 0)
		ret = ft_zero_width(ret, flag);
	return (ret);
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
	return (t);
}
