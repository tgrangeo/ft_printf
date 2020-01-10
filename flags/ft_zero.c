/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_zero.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/21 11:22:14 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 19:39:47 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_zero_width(char *str, struct flags *flag)
{
	int		len;
	char	*width;
	int		len_width;

	len = ft_strlen(str);
	width = NULL;
	if (flag->width <= len || flag->width == 0 || flag->type == 's')
		return (str);
	len_width = flag->width - len;
	str = ft_neg(width, len_width, str);
	return (str);
}

char	*ft_zero_pres(char *str, struct flags *flag)
{
	int		len;
	char	*prec;
	int		len_prec;

	len = ft_strlen(str);
	if (str[0] == '-')
		len--;
	prec = NULL;
	if (flag->precision <= len || flag->precision == 0 || flag->type == 's')
		return (str);
	len_prec = flag->precision - len;
	if (str[0] == '-')
		len_prec--;
	str = ft_neg(prec, len_prec, str);
	return (str);
}
