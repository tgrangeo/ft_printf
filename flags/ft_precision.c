/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 17:53:23 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 13:59:47 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*apply_precision(char *str, struct flags *flag)
{
	char	*res;
	int		len;

	len = ft_strlen(str);
	res = NULL;
	if (flag->precision == -1 && (ft_test_type(flag, "p%cduixX") == 0))
		return (ft_strdup(""));
	if (flag->precision == -1 || (ft_test_type(flag, "pc%") > 0 && flag->precision >= 0))
		return (ft_strdup(str));
	if (flag->type == 's')
	{
		if (len == 0)
			res = ft_strdup("");
		if (flag->precision >= len)
			res = ft_strdup(str);
		if (flag->precision < len)
			res = ft_strndup(str, flag->precision);
	}
	if (ft_test_type(flag, "duixX"))
		res = ft_duix(str, flag, len);
	return (res);
}

char	*ft_duix(char *str, struct flags *flag, int len)
{
	char	*res;
	char	*prec;
	int		len_prec;
	int		i;

	i = 0;
	prec = NULL;
	if (str[0] == '-')
		len--;
	len_prec = flag->precision - len;
	res = NULL;
	if (len_prec == 0)
		return (ft_strdup(str));
	if (len_prec <= 0)
		res = ft_strdup(str);
	if (len_prec > 0)
		res = ft_neg(prec, len_prec, str);
	return (res);
}

char	*ft_neg(char *prec, int len_prec, char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
	{
		prec = malloc(sizeof(char) * len_prec + 2);
		prec[i++] = '-';
		while (i < len_prec + 1)
		{
			prec[i] = '0';
			i++;
		}
		prec[i] = '\0';
		str = ft_strjoin(prec, str + 1);
		return (str);
	}
	else
	{
		prec = malloc(sizeof(char) * len_prec + 1);
		while (len_prec-- > 0)
			prec[i++] = '0';
		prec[i] = '\0';
		return (ft_strjoin(prec, str));
	}
}
