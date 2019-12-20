/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_flags.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 16:21:58 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 16:50:44 by tgrangeo    ###    #+. /#+    ###.fr     */
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