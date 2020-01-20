/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_zero.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/21 11:22:14 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:13:45 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_zero_width(char *str, struct flags *flag)
{
	int		len;
	char	*zero;
	char	*res;
	int		len_zero;

	len = ft_strlen(str);
	zero = NULL;
	if (flag->width <= len || flag->width == 0 || flag->type == 's')
		return (str);
	len_zero = flag->width - len;
	res = apply_zero(zero, len_zero, str);
	//free(str);
	return (res);
}

char	*ft_zero_pres(char *str, struct flags *flag)
{
	int		len;
	char	*zero;
	int		len_zero;
	char	*res;

	len = ft_strlen(str);
	if (str[0] == '-')
		len--;
	zero = NULL;
	if (flag->precision <= len || flag->precision == 0 || flag->type == 's')
		return (str);
	len_zero = flag->precision - len;
	if (str[0] == '-')
		len_zero--;
	res = apply_zero(zero, len_zero, str);
	free(str);
	return (res);
}
