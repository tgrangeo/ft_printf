/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:51:47 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*width_precision(char *str, struct flags *flag)
{
	char *res;

	res = NULL;
	if (flag->type == 'c' || flag->type == 'p')
	{
		res = ft_strdup(str);
		free(str);
		return (res);
	}
	if (flag->width == 0 && flag->precision == 0)
	{
		free(str);
		return (ft_strdup(""));
	}
	if (flag->width >= 0 || flag->precision < 0)
		str = apply_precision(str, flag);
	res = apply_width(str, flag);
	return (res);
}
