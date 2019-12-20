/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:11:50 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/20 15:28:39 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *str, ...)
{
	va_list				list;
	int					i;
	struct type		print;
	struct flags		flag;

	va_start(list, str);
	i = 0;
	ft_init_struct(&print);
	while (str[i])
	{
		while (str[i] == '%' && (ft_isprint(str[i + 1]) > 0))
		{
			if (init_struct_flags(&flag, str + i, &list) > 0)
				if (ft_traitement(&print, &list, &flag) > 0)
					i = i + flag.end;
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
	return (1);
}
