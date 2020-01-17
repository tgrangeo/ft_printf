/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_test_type.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 12:54:16 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:56:54 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_test_type(struct flags *flag, char *str)
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
