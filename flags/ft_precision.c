/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_precision.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 17:53:23 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 20:07:12 by tgrangeo    ###    #+. /#+    ###.fr     */
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
	if (flag->precision == -1 && flag->type != 's')
		return (ft_strdup(str));
	else if (flag->precision == -1 && (flag->type == 's'))
		return (ft_strdup(""));
	if (flag->type == 'c' || flag->type == 'p' || flag->type == '%')
		return (str);
	if (flag->type == 's')
	{
		if (len == 0)
			res = ft_strdup("");
		if (flag->precision > len)
			res = ft_strdup(str);
		if (flag->precision < len)
			res = ft_strndup(str, flag->precision);
	}
	if (flag->type == 'd' || flag->type == 'u' || flag->type == 'i'
							|| flag->type == 'x' || flag->type == 'X')
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
	if (flag->precision <= len)
		len_prec = flag->precision;
	else
		len_prec = flag->precision - len;
	res = NULL;
	if (flag->precision == 0)
		return (ft_strdup(str));
	if (len_prec < 0)
		res = ft_strdup(str);
	if (len_prec > 0)
	{
		if (str[i] == '-')
			res = ft_neg(prec, len_prec, str);
		else
		{
			prec = malloc(sizeof(char) * len_prec + 1);
			if (len_prec > 1)
				while (len_prec-- > 0)
					prec[i++] = '0';
			prec[i] = '\0';
			res = ft_strjoin(prec, str);
		}
	}
	return (res);
}

char	*ft_neg(char *prec, int len_prec, char *str)
{
	int	i;

	i = 0;
	prec = malloc(sizeof(char) * len_prec);
	str = ft_substr(str, 1, ft_strlen(str) - 1);
	prec[i++] = '-';
	while (len_prec-- >= 0)
		prec[i++] = '0';
	prec[i] = '\0';
	return (ft_strjoin(prec, str));
}
