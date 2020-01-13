/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main3.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 13:20:12 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 13:39:37 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

#include <stdio.h>

int		main()
{

	printf("%d\n", printf("{%---2.d}\n", 5));
	printf("%d\n", ft_printf("{%---2.d}\n", 5));

	
	printf("%d\n", printf("{%--2.d}\n", 5));
	printf("%d\n", ft_printf("{%--2.d}\n", 5));
	
	
	printf("%d\n", printf("{%---2d}\n", 5));
	printf("%d\n", ft_printf("{%---2d}\n", 5));

	printf("%d\n", printf("{%0002.d}\n", 5));
	printf("%d\n", ft_printf("{%0002.d}\n", 5));

	printf("%d\n", printf("{%0002d}\n", 5));
	printf("%d\n", ft_printf("{%0002d}\n", 5));

	printf("%d\n", printf("{%---2.10s}\n", "hello"));
	printf("%d\n", ft_printf("{%---2.10s}\n", "hello"));

	printf("%d\n", printf("{%0002.10s}\n", "hello"));
	printf("%d\n", ft_printf("{%0002.10s}\n", "hello"));

	printf("%d\n", printf("{%---2.p}\n", "hello"));
	printf("%d\n", ft_printf("{%---2.p}\n", "hello"));

	printf("%d\n", printf("{%0002.p}\n", "hello"));
	printf("%d\n", ft_printf("{%0002.p}\n", "hello"));

	printf("%d\n", printf("{%---2u}\n", 5));
	printf("%d\n", ft_printf("{%---2u}\n", 5));

	printf("%d\n", printf("{%0002.u}\n", 5));
	printf("%d\n", ft_printf("{%0002.u}\n", 5));

	printf("%d\n", printf("{%-----------2d}\n", 5));
	printf("%d\n", ft_printf("{%-----------2d}\n", 5));

	printf("%d\n", printf("{%000000000002.d}\n", 5));
	printf("%d\n", ft_printf("{%000000000002.d}\n", 5));

	printf("%d\n", printf("{%-----------100.d}\n", 5));
	printf("%d\n", ft_printf("{%-----------100.d}\n", 5));

	printf("%d\n", printf("{%00000000000100.d}\n", 5));
	printf("%d\n", ft_printf("{%00000000000100.d}\n", 5));
	printf("%d\n", printf("{%-----------100.10s}\n", "slt"));
	printf("%d\n", ft_printf("{%-----------100.10s}\n", "slt"));



	printf("%d", dprintf(1, "[%54.0u]", 3703157668));
	printf("\n");
	printf("%d", ft_printf("[%54.0u]", 3703157668));
	printf("\n");





	printf("%d", dprintf(1, "[%*.*s]", 5, 1, "hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 5, 1, "hello"));
	printf("\n");



	printf("%d", dprintf(1, "[%*.*s]", 5, 10, "hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 5, 10, "hello"));
	printf("\n");

	printf("%d", dprintf(1, "[%*.*s]", 50, 100, "hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 50, 100, "hello"));
	printf("\n");

	printf("%d", dprintf(1, "[%*.*s]", 5, 100, "hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 5, 100, "hello"));
	printf("\n");
	
	printf("%d", dprintf(1, "[%*.*d]", 0, -5, 0));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 0, -5, 0));
	printf("\n");


	printf("%d\n", printf("%.*s\n", 5, "patate"));
	printf("%d\n", ft_printf("%.*s\n", 5, "patate"));
	printf("%d\n", printf("%.*s\n", 50, "patate"));
	printf("%d\n", ft_printf("%.*s\n", 50, "patate"));
	printf("%.*s\n", -5, "patate");
	ft_printf("%.*s\n", -5 ,"patate");
	printf("%.*d\n", 5, 20);
	ft_printf("%.*d\n", 5 ,20);
	printf("%.*s\n", 1, "patate");
	ft_printf("%.*s\n", 1 ,"patate");
	printf("%*.*s\n", 10, 5, "patate");
	ft_printf("%*.*s\n", 10, 5 ,"patate");
	printf("%*.*d\n", 10, 5, 10);
	ft_printf("%*.*d\n", 10, 5 ,10);
	printf("%*.*s\n", 10, 9, "patate");
	ft_printf("%*.*s\n", 10, 9 ,"patate");
	printf("%*.*d\n", 10, 9, 10);
	ft_printf("%*.*d\n", 10, 9 ,10);
	printf("%*.*s\n", 10, 20, "patate");
	ft_printf("%*.*s\n", 10, 20 ,"patate");
	printf("%*.*d\n", 10, 20, 10);
	ft_printf("%*.*d\n", 10, 20 ,10);
	printf("%*.*d\n", 0, 0, 42);
	ft_printf("%*.*d\n", 0, 0 ,42);
	printf("%*.*d\n", 0, -5, 42);
	ft_printf("%*.*d\n", 0, -5 ,42);
	printf("%*.*d\n", -5, 0, 42);
	ft_printf("%*.*d\n", -5, 0 ,42);
	printf("%*.*s\n", 0, 5, "hello");
	ft_printf("%*.*s\n", 0, 5 ,"hello");
	printf("%*.*s\n", 10, 7, "hello1");
	ft_printf("%*.*s\n", 10, 7,"hello1");
	printf("%*.*s\n", 6, 5, "patate");
	ft_printf("%*.*s\n", 6, 5 ,"patate");
	printf("%*.*d\n", 6, 5, 10);
	ft_printf("%*.*d\n", 6, 5 ,10);
	printf("|%-*.*s|\n", 5 ,2 ,NULL);
	ft_printf("|%-*.*s|\n", 5, 2, NULL);
	printf("%*.*d\n", -50, 0, 42);
	ft_printf("%*.*d\n", -50, 0,42);
	printf("%*.*d\n", -50, 19, 42);
	ft_printf("%*.*d\n", -50, 19, 42);
	printf("%*.*d\n", -50, 99, 42);
	ft_printf("%*.*d\n", -50, 99, 42);
	printf("%*.*d\n", -50, 100, 42);
	ft_printf("%*.*d\n", -50, 100, 42);
	printf("%*.*d\n", -50, 1000, 42);
	ft_printf("%*.*d\n", -50, 1000, 42);
	printf("%d\n", printf("|%-0*%|\n", 5));
	printf("%d\n", ft_printf("|%-0*%|\n", 5));
	printf("|%c|\n", '\0');
	ft_printf("|%c|\n", '\0');
	printf("|%.c|\n", '\0');
	ft_printf("|%.c|\n", '\0');
	printf("|%.c|\n", 'b');
	ft_printf("|%.c|\n", 'b');
	printf("|%0-*%|\n", -5);
	ft_printf("|%0-*%|\n", -5);
	printf("|%0*.*i|\n", -5, 0, 0);
	ft_printf("|%0*.*i|\n", -5, 0, 0);
	printf("|%0*.*d|\n", -5, 0, 0);
	ft_printf("|%0*.*d|\n", -5, 0, 0);
	printf("|%0*d|\n", -10, 0);
	ft_printf("|%0*d|\n", -10, 0);

	printf("|%54.1s|\n", NULL);
	ft_printf("|%54.1s|\n", NULL);
	printf("|%54.0s|\n", "P");
	ft_printf("|%54.0s|\n", "P");


	printf("|%.*d|\n", 0, 45);
	ft_printf("|%.*d|\n", 0, 45);
	
	printf("|%.*d|\n", 1, 45);
	ft_printf("|%.*d|\n", 1, 45);
	
	printf("|%-*d|\n", -9, -45);
	ft_printf("|%-*d|\n", -9, -45);

	printf("|%.%|\n");
	ft_printf("|%.%|\n");
	printf("|%---*d|\n", -45, -40);
	ft_printf("|%--*d|\n", -45, -40);
	printf("|%000*d|\n", 45, -40);
	ft_printf("|%000*d|\n", 45, -40);





















}
