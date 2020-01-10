/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 17:01:42 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*width_precision(char *str, struct flags *flag)
{
	char *res;

	res = NULL;
	if (flag->type == 'c' || flag->type == 'p')
		return (NULL);
	if (flag->width == 0 && flag->precision == 0)
		return (ft_strdup(""));
	if (flag->type == '%')
		return (apply_width(str, flag));
	else
	{
		if (flag->width >= 0 || flag->precision < 0)
			res = apply_precision(str, flag);
		return (apply_width(res, flag));
	}
}
