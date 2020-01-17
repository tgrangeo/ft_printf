/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:11:50 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:59:37 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *str, ...)
{
	va_list				list;
	struct flags		flag;
	char				*res;
	int					i;
	int					len;

	va_start(list, str);
	res = NULL;
	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] == '%' && (ft_isprint(str[i + 1]) > 0))
		{
			if (init_struct_flags(&flag, str + i, list) > 0)
			{
				len = len + ft_traitement(list, &flag, &res);
				i = i + flag.end;
				ft_putstr_fd(res, 1);
				free(res);
			}
			i++;
		}
		write(1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}
