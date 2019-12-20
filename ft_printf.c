/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:11:50 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 15:38:44 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *str, ...)
{
	va_list				list;
	int					i;
	struct s_printf		print;
	char				*temp;

	va_start(list, str);
	i = 0;
	ft_init_struct(&print);
	while (str[i])
	{
		while (str[i] == '%' && (ft_isprint(str[++i]) > 0))
		{
			temp = ft_recup(str, i);
			i = i + ft_traitement(temp, &print, &list);
		}
		write(1, &str[i], 1);
		i++;
	}
	return (1);
}
