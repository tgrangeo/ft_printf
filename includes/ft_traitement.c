/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_traitement.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 16:07:56 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/20 18:23:52 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_traitement(struct type *print, va_list *list, struct flags *flag)
{
	char			*ret;

	ret = ft_strdup("");
	print->type = ft_find_index(flag->type, print);
	if (print->type >= 0 && print->type != 8)
		print->ft[print->type](list, &ret);
	else if (print->type == 8)
		ft_printf_100(&ret);
	if (flag->width > 0 && flag->precision == 0)
		ret = apply_width(ret, flag);
	if (flag->precision >= 0 && flag->width == 0)
		ret = apply_precision(ret, flag);
	if (flag->precision >= 0 && flag->width > 0)
		ret = width_precision(ret, flag);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (1);
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
