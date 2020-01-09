/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isduix.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 12:54:16 by tgrangeo     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 12:56:52 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_isduix(struct flags *flag)
{
	if (flag->type == 'd' || flag->type == 'u' || flag->type == 'i'
							|| flag->type == 'x' || flag->type == 'X')
		return (1);
	else
		return (0);
}