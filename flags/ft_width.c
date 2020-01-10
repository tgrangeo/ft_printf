/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_width.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 16:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/10 18:55:01 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*apply_width(char *str, struct flags *flag)
{
	int		len;
	char	*width;
	int		len_width;
	int		i;

	i = 0;
	if (flag->signe > 0)
		return (apply_neg_width(str, flag));
	len = ft_strlen(str);
	if (flag->width <= len || flag->width == 0)
		return (str);
	len_width = flag->width - len;
	width = malloc(sizeof(char) * len_width + 1);
	while (len_width-- > 0)
		width[i++] = ' ';
	width[i] = '\0';
	str = ft_strjoin(width, str);
	return (str);
}

char	*apply_neg_width(char *str, struct flags *flag)
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
	str = ft_strjoin(str, width);
	return (str);
}
