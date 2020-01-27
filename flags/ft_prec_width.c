/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_prec_width.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 18:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 22:50:05 by thomasgrang ###    #+. /#+    ###.fr     */
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
	//dprintf(1, "###############    %d    ###########\n", flag->signe);
	res = apply_width(str, flag);
	return (res);
}
