/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solotest.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/08 10:54:18 by tclaudel     #+#   ##    ##    #+#       */
/*   Updated: 2019/12/28 11:17:11 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	dprintf(1, "\ntesting\t: %s\n", "\"%3i\", -1");
	if ((printf("|%*.10x|\n", -45, 200)) == (ft_printf("|%*.10x|\n", -45, 200)))
		puts("\nSUCCEED\n");
	else
		puts("\nERROR\n");

	dprintf(1, "\ntesting\t: %s\n", "\"|%01i|\", -1");
	if ((printf("|%01i|\n", -1)) == (ft_printf("|%01i\n|", -1)))
		puts("\nSUCCEED\n");
	else
		puts("\nERROR\n");

	dprintf(1, "\ntesting\t: %s\n", "\"|%2.2i|\", -1");
	if ((printf("|%2.2i|\n", -1)) == (ft_printf("|%2.2i|\n", -1)))
		puts("\nSUCCEED\n");
	else
		puts("\nERROR\n");


}