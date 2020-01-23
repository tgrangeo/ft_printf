/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solotest.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lolopez <lolopez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 12:36:04 by lolopez      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 09:49:31 by manaccac    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

#include <stdio.h>
#include <limits.h>

int		main()
{
	int a;
	int b;
	int c = 0;


	a = printf("%s\n%c\n%d\n%i\n%x\n%X\n%p\n%u\n%%\n", "jean-pierre", c, c, c, 123456, 123456, &c, 123456);
	b = ft_printf("%s\n%c\n%d\n%i\n%x\n%X\n%p\n%u\n%%\n", "jean-pierre", c, c, c, 123456, 123456, &c, 123456);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);

	a = printf("|%01.10x|\n", -1);
	b = ft_printf("|%01.10x|\n", -1);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);

	a = printf("|%0*.*i|\n", -5, 0, 0);
	b = ft_printf("|%0*.*i|\n", -5, 0, 0);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);


	a = printf("|%0-*%|\n", -5);
	b = ft_printf("|%0-*%|\n", -5);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);

	a = printf("|%-0*%|\n", 5);
	b = ft_printf("|%-0*%|\n", 5);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);

	a = printf("|%-*.*s|\n", 5 ,2 ,NULL);
	b = ft_printf("|%-*.*s|\n", 5, 2, NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
		
	printf("printf = %d, moi = %d\n", a, b);

	a = printf("|%.p|\n", NULL);
	b = ft_printf("|%.p|\n", NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
		
	printf("printf = %d, moi = %d\n", a, b);


	a = printf("|%.p|\n", NULL);
	b = ft_printf("|%.p|\n", NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
		
	printf("printf = %d, moi = %d\n", a, b);


	a = printf("|%.c|\n", '\0');
	b = ft_printf("|%.c|\n", '\0');
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
		
	printf("printf = %d, moi = %d\n", a, b);
}
