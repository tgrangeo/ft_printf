/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   apply_zero.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:04:27 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 11:19:17 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static char		*apply_neg(char *prec, int len_prec, char *str)
{
	int		i;
	char	*res;

	i = 0;
	prec = malloc(sizeof(char) * (len_prec + 2));
	prec[i++] = '-';
	while (i < len_prec + 1)
	{
		prec[i] = '0';
		i++;
	}
	prec[i] = '\0';
	res = ft_strjoin(prec, str + 1);
	free(prec);
	free(str);
	return (res);
}

char			*apply_zero(char *prec, int len_prec, char *str)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	if (str[i] == '-')
		res = apply_neg(prec, len_prec, str);
	else
	{
		prec = malloc(sizeof(char) * len_prec + 1);
		while (len_prec-- > 0)
			prec[i++] = '0';
		prec[i] = '\0';
		res = ft_strjoin(prec, str);
		free(prec);
		free(str);
	}
	return (res);
}
