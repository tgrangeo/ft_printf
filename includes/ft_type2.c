/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_type2.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/09 11:39:37 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/23 12:46:26 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_printf_x_upper(va_list *list, char **res)
{
	char			*str;
	unsigned long	n;

	n = va_arg(*list, unsigned long);
	str = ft_itoa_base(n, "0123456789ABCDEF");
	*res = ft_strdup(str);
	//free(str);
}

void		ft_printf_x(va_list *list, char **res)
{
	unsigned long	n;
	char			*str;

	n = va_arg(*list, unsigned long);
	str = ft_itoa_base(n, "0123456789abcdef");
	*res = ft_strdup(str);
	//free(str);
}

void		ft_printf_p(va_list *list, char **res)
{
	unsigned long	n;
	char			*str;

	n = va_arg(*list, unsigned long);
	if (n == 0)
		*res = ft_strdup("0x0");
	else
	{
		str = ft_strjoin("0x", ft_itoa_base(n, "0123456789abcdef"));
		*res = ft_strdup(str);
	}
	//free(str);
}
