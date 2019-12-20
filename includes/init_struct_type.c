/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_init_struct.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/07 19:12:57 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 13:51:00 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_init_struct(struct s_printf *new)
{
	ft_tabft(new);
	ft_tab_i(new);
	new->i_conv = 0;
	new->width = 0;
}

void		ft_tabft(struct s_printf *new)
{
	new->ft[0] = ft_printf_c;
	new->ft[1] = ft_printf_d;
	new->ft[2] = ft_printf_s;
	new->ft[3] = ft_printf_x;
	new->ft[4] = ft_printf_x_upper;
	new->ft[5] = ft_printf_u;
	new->ft[6] = ft_printf_d;
	new->ft[7] = ft_printf_p;
}

void		ft_tab_i(struct s_printf *new)
{
	new->tab_i[0] = 'c';
	new->tab_i[1] = 'd';
	new->tab_i[2] = 's';
	new->tab_i[3] = 'x';
	new->tab_i[4] = 'X';
	new->tab_i[5] = 'u';
	new->tab_i[6] = 'i';
	new->tab_i[7] = 'p';
	new->tab_i[8] = '%';
}
