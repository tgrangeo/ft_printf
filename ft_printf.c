/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 15:26:52 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 15:29:57 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_put(va_list list, t_flags *flag)
{
	char		*res;
	int			len;

	len = ft_traitement(list, flag, &res);
	ft_putstr_fd(res, 1);
	free(res);
	return (len);
}

int			ft_printf(char *str, ...)
{
	va_list				list;
	t_flags				flag;
	int					i;
	int					len;

	va_start(list, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && i <= ft_strlen(str))
		{
			init_struct_flags(&flag, str + i, list);
			len += ft_put(list, &flag);
			i += flag.end;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}
