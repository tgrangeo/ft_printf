/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   apply_zero.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:04:27 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 18:28:00 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*apply_zero(char *prec, int len_prec, char *str)
{
	int	i;
	char *res;

	i = 0;
	if (str[i] == '-')
	{
		prec = malloc(sizeof(char) * (len_prec + 2));
		prec[i++] = '-';
		while (i < len_prec + 1)
		{
			prec[i] = '0';
			i++;
		}
		prec[i] = '\0';
		res = ft_strjoin(prec, str + 1);
	}
	else
	{
		prec = malloc(sizeof(char) * len_prec + 1);
		while (len_prec-- > 0)
			prec[i++] = '0';
		prec[i] = '\0';
		res = ft_strjoin(prec, str);
	}
	free(prec);
	free(str);
	return (res);
}