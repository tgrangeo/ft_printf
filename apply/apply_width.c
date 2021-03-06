/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   apply_width.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 16:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/31 13:05:14 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

static char			*apply_neg_width(char *str, t_flags *flag, char *res)
{
	int		len;
	char	*width;
	int		len_width;
	int		i;

	i = 0;
	len = ft_strlen(str);
	if (flag->width <= len || flag->width == 0)
		return (str);
	len_width = flag->width - len;
	width = malloc(sizeof(char) * len_width + 1);
	while (len_width-- > 0)
		width[i++] = ' ';
	width[i] = '\0';
	res = ft_strjoin(str, width);
	free(str);
	free(width);
	return (res);
}

static char			*apply_width2(char *str, t_flags *flag, int len)
{
	char	*width;
	int		len_width;
	char	*res;
	int		i;

	i = 0;
	len_width = flag->width - len;
	width = malloc(sizeof(char) * len_width + 1);
	while (len_width-- > 0)
		width[i++] = ' ';
	width[i] = '\0';
	res = ft_strjoin(width, str);
	free(str);
	free(width);
	return (res);
}

char				*apply_width(char *str, t_flags *flag)
{
	int		len;
	char	*res;

	len = ft_strlen(str);
	res = NULL;
	if (flag->signe > 0)
		res = apply_neg_width(str, flag, res);
	else if (flag->width <= len || flag->width == 0)
	{
		res = ft_strdup(str);
		free(str);
	}
	else
		res = apply_width2(str, flag, len);
	return (res);
}
