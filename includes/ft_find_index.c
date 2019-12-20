/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_index.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 11:14:05 by thomasgrang  #+#   ##    ##    #+#       */
/*   Updated: 2019/12/20 15:29:11 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_find_index(char c, struct type *new)
{
	int	i;

	i = 0;
	while (new->tab_i[i])
	{
		if (new->tab_i[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
