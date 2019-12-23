/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_type.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/07 19:12:57 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/23 15:58:15 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_init_struct(struct type *new)
{
	ft_tabft(new);
	ft_tab_i(new);
	new->type = 0;
}

void		ft_tabft(struct type *new)
{
	new->ft[0] = ft_printf_d;
	new->ft[1] = ft_printf_s;
	new->ft[2] = ft_printf_x;
	new->ft[3] = ft_printf_x_upper;
	new->ft[4] = ft_printf_u;
	new->ft[5] = ft_printf_d;
	new->ft[6] = ft_printf_p;
	new->ft[7] = ft_printf_c;
}

void		ft_tab_i(struct type *new)
{
	new->tab_i[0] = 'd';
	new->tab_i[1] = 's';
	new->tab_i[2] = 'x';
	new->tab_i[3] = 'X';
	new->tab_i[4] = 'u';
	new->tab_i[5] = 'i';
	new->tab_i[6] = 'p';
	new->tab_i[7] = 'c';
	new->tab_i[8] = '%';
}
