/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   apply_precision.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 17:53:23 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 22:39:54 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

static char		*ft_duix(char *str, t_flags *flag, int len)
{
	char	*res;
	char	*prec;
	int		len_prec;
	int		i;

	i = 0;
	prec = NULL;
	res = NULL;
	len_prec = len;
	if (str[0] == '-')
		len--;
	if (flag->precision > -1)
		len_prec = flag->precision - len;
	if (len_prec <= 0)
		return (str);
	else
		res = apply_zero(prec, len_prec, str);
	return (res);
}

char			*apply_precision(char *str, t_flags *flag)
{
	char	*res;
	int		len;

	len = ft_strlen(str);
	res = NULL;
	if (flag->precision == -1 && (ft_test_type(flag, "p%cduixX") == 0))
	{
		free(str);
		return (ft_strdup(""));
	}
	if (flag->precision == -1 || (ft_test_type(flag, "pc%") > 0 &&
									flag->precision >= 0))
		return (str);
	else if (flag->type == 's')
	{
		if (flag->precision >= len)
			res = ft_strdup(str);
		else if (flag->precision < len)
			res = ft_strndup(str, flag->precision);
		free(str);
	}
	else if (ft_test_type(flag, "duixX"))
		res = ft_duix(str, flag, len);
	return (res);
}
