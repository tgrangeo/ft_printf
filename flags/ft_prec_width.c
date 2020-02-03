/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 13:02:01 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*width_precision(char *str, t_flags *flag)
{
	char *res;

	res = NULL;
	if (flag->width == 0 && flag->precision == 0)
	{
		free(str);
		return (ft_strdup(""));
	}
	if (flag->precision != -2)
		str = apply_precision(str, flag);
	res = apply_width(str, flag);
	return (res);
}
