/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_traitement.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 16:07:56 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 18:55:12 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_traitement(char *str, struct s_printf *print, va_list *list)
{
	int 			i;
	char			*ret;
	struct flags	flag;

	ret = NULL;
	i = ft_recupend(str, "scdiuxXp%");
	init_struct_flags(&flag, str, list);
	print->i_conv = ft_find_index(str[i], print);
	if (print->i_conv >= 0 && print->i_conv != 8)
		print->ft[print->i_conv](list, &ret);
	else if (print->i_conv == 8)
		ft_printf_100(&ret);
	if (flag.width > 0)
		ret = apply_width(ret, &flag);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (i + 1);
}

int		ft_count(const char *str, int start)
{
	int		i;
	int		t;
	char	*n;

	i = start;
	t = 0;
	n = NULL;
	while (ft_isdigit(str[i++]) > 0 && str[i])
		t++;
	n = ft_substr(str, start, t);
	t = atoi(n);
	return (t);
}
