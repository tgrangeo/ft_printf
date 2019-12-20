/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_u.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 14:07:02 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 11:16:46 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr_u(int n)
{
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		nb = nb * -1;
		if (nb == 1)
			nb = 4294967295;
		else
			nb = 4294967295 - (nb - 1);
	}
	if (nb > 9)
	{
		ft_putnbr_u(nb / 10);
		ft_putnbr_u(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}
