/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_zero.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/21 11:22:14 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 12:19:55 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_zero_width(char *str, struct flags *flag)
{
	int		len;
	char	*width;
	int		len_width;
	int		i;

	i = 0;
	len = ft_strlen(str);
	width = NULL;
	if (flag->width <= len || flag->width == 0 || flag->type == 's')
		return (str);
	len_width = flag->width - len;
	if (str[i] == '-')
		str = ft_neg(width, len_width - 1, str);
	else
	{
		width = malloc(sizeof(char) * len_width + 1);
		while (len_width-- > 0)
			width[i++] = '0';
		width[i] = '\0';
		str = ft_strjoin(width, str);
	}
	return (str);
}
