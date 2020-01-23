/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_test_type.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 12:54:16 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 16:40:38 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_test_type(t_flags *flag, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (flag->type == str[i])
			return (1);
		i++;
	}
	return (0);
}
