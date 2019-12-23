/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:11:50 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/23 15:56:50 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *str, ...)
{
	va_list				list;
	struct type			print;
	struct flags		flag;
	char				*res;
	int					i;
	int					len;

	va_start(list, str);
	res = NULL;
	i = 0;
	len = 0;
	ft_init_struct(&print);
	while (str[i])
	{
		while (str[i] == '%' && (ft_isprint(str[i + 1]) > 0))
		{
			if (init_struct_flags(&flag, str + i, &list) > 0)
			{
				if (!(res = ft_traitement(&print, &list, &flag)))
					return (0);
				else
				{
					i = i + flag.end;
					ft_putstr_fd(res, 1);
					len = len + ft_strlen(res);
					free(res);
				}
			}
			i++;
		}
		write(1, &str[i], 1);
		i++;
		len++;
	}
	return (len);
}
