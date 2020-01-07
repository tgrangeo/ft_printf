/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/07 12:50:48 by tgrangeo    ###    #+. /#+    ###.fr     */
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
	if (flag->type == '%')
		return (apply_width(str, flag));
	else
	{
		if (flag->width > 0)
			return (apply_precision(str, flag));
		else
			return (apply_width(res, flag));
	}
}
