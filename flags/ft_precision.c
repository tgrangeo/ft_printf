/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 17:53:23 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 17:05:17 by tgrangeo    ###    #+. /#+    ###.fr     */
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
	if (flag->precision == -1 && (flag->type != 'p' && ft_isduix(flag) == 0))
		return (ft_strdup(""));
	if (flag->precision == -1 && (flag->type == 'p' || ft_isduix(flag) > 0))
		return (ft_strdup(str));
	if (flag->type == 'c' || flag->type == 'p' || flag->type == '%')
		return (str);
	if (flag->type == 's')
	{
		if (len == 0)
			res = ft_strdup("");
		if (flag->precision >= len)
			res = ft_strdup(str);
		if (flag->precision < len)
			res = ft_strndup(str, flag->precision);
	}
	if (ft_isduix(flag) > 0)
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
		prec = malloc(sizeof(char) * len_prec);
		prec[i++] = '-';
		while (i <= len_prec)
		{
			prec[i] = '0';
			i++;
		}
		prec[i] = '\0';
		return (ft_strjoin(prec, str + 1));
	}
	else
	{
		prec = malloc(sizeof(char) * len_prec + 1);
		while (len_prec > 0)
		{
			prec[i++] = '0';
			len_prec--;
		}
		prec[i] = '\0';
		return (ft_strjoin(prec, str));
	}
}
