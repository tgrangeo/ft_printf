/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/03 11:11:05 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "../ft_printf.h"

char	*width_precision(char *str, struct flags *flag)
{
	char *res;

	if (flag->type == 'c' || flag->type == 'p')
		return (NULL);
	if (flag->type == '%')
		return (apply_width(str, flag));
	else
	{
		res = apply_precision(str, flag);
		res = apply_width(res, flag);
	}
	return (res);
}
