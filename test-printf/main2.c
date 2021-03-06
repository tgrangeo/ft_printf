/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tgrangeo <tgrangeo@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/18 13:00:10 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 16:58:23 by tgrangeo    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <limits.h>

int	main(void)
{

	char str = "hello";
	printf("%d", ft_printf("20d = %20d\n", 10));
	printf("\n");
	printf("%d", printf("20d = %20d\n", 10));
	printf("\n");
	printf("%d", ft_printf("-20d = %-20d\n", 10));
	printf("\n");
	printf("%d", printf("-20d = %-20d\n", 10));
	printf("\n");
	printf("%d", ft_printf("020d = %020d\n", 10));
	printf("\n");
	printf("%d", printf("020d = %020d\n", 10));
	printf("\n");
	printf("%d", ft_printf("02d = %02d\n", 10));
	printf("\n");
	printf("%d", printf("02d = %02d\n", 10));
	printf("\n");
	printf("%d", ft_printf("%020x\n", 10));
	printf("\n");
	printf("%d", printf("%020x\n", 10));
	printf("\n");
	printf("%d", ft_printf("%-20x\n", -2));
	printf("\n");
	printf("%d", printf("%-20x\n", -2));
	printf("\n");
	printf("%d", ft_printf("%20x\n", -2));
	printf("\n");
	printf("%d", printf("%20x\n", -2));
	printf("\n");
	printf("%d", ft_printf("%020X\n", 10));
	printf("\n");
	printf("%d", printf("%020X\n", 10));
	printf("\n");
	printf("%d", ft_printf("%020X\n", -2));
	printf("\n");
	printf("%d", printf("%020X\n", -2));
	printf("\n");

	printf("%d", ft_printf("%5X\n", -38));
	printf("\n");
	printf("%d", printf("%5X\n", -38));
	printf("\n");

	printf("%d", ft_printf("%05X\n", -38));
	printf("\n");
	printf("%d", printf("%05X\n", -38));
	printf("\n");

	printf("%d", ft_printf("%0X\n", 7));
	printf("\n");
	printf("%d", printf("%0X\n", 7));
	printf("\n");
	printf("%d", ft_printf("%00X\n", -38));
	printf("\n");
	printf("%d", printf("%00X\n", -38));
	printf("\n");
	printf("%d", ft_printf("%00X\n", 38));
	printf("\n");
	printf("%d", printf("%00X\n", 38));
	printf("\n");
	printf("%d", ft_printf("%00X\n", 0));
	printf("\n");
	printf("%d", printf("%00X\n", 0));
	printf("\n");

	printf("%d", ft_printf("%0d\n", 0));
	printf("\n");
	printf("%d", printf("%0d\n", 0));
	printf("\n");

	printf("%d", ft_printf("%d\n", 0));
	printf("\n");
	printf("%d", printf("%d\n", 0));
	printf("\n");
	printf("%d", ft_printf("%1d\n", 0));
	printf("\n");
	printf("%d", printf("%1d\n", 0));
	printf("\n");
	printf("%d", ft_printf("%-d\n", 27));
	printf("\n");
	printf("%d", printf("%-d\n", 27));
	printf("\n");
	printf("%d", ft_printf("%-d\n", -27));
	printf("\n");
	printf("%d", printf("%-d\n", -27));
	printf("\n");
	printf("%d", ft_printf("%-54u\n", 0));
	printf("\n");
	printf("%d", printf("%-54u\n", 0));
	printf("\n");
	printf("%d", ft_printf("%046u\n", 0));
	printf("\n");
	printf("%d", printf("%046u\n", 0));
	printf("\n");
	printf("%d", ft_printf("%046i\n", -2147483648));
	printf("\n");
	printf("%d", printf("%046i\n", -2147483648));
	printf("\n");
	printf("%d", ft_printf("%.10s\n", "salut"));
	printf("\n");
	printf("%d", printf("%.10s\n", "salut"));
	printf("\n");
	printf("%d", ft_printf("%.3s\n", "salut"));
	printf("\n");
	printf("%d", printf("%.3s\n", "salut"));
	printf("\n");
	printf("%d", ft_printf("%.10s\n", NULL));
	printf("\n");
	printf("%d", printf("%.10s\n", NULL));
	printf("\n");
	printf("%d", ft_printf("%.3s\n", NULL));
	printf("\n");
	printf("%d", printf("%.3s\n", NULL));
	printf("\n");
	printf("%d", ft_printf("%.3d\n", -19));
	printf("\n");
	printf("%d", printf("%.3d\n", -19));
	printf("\n");
	printf("%d", ft_printf("%.3d\n", -19));
	printf("\n");
	printf("%d", printf("%.3d\n", -19));
	printf("\n");
	printf("%d", ft_printf("%.0x\n", 0));
	printf("\n");
	printf("%d", printf("%.0x\n", 0));
	printf("\n");
	printf("%d", ft_printf("%.0x", -13));
	printf("\n");
	printf("%d", printf("%.0x", -13));
	printf("\n");
	printf("%d", ft_printf("%.0x", 12));
	printf("\n");
	printf("%d", printf("%.0x", 12));
	printf("\n");
	dprintf(1, "[%.0x]", 12);
	printf("\n");
	ft_printf("[%.0x]", 12);
	printf("\n");
	dprintf(1, "[%.0x]", -13);
	printf("\n");
	ft_printf("[%.0x]", -13);
	printf("\n");
	dprintf(1, "[%.015s]", "bonjour");
	printf("\n");
	ft_printf("[%.015s]", "bonjour");
	printf("\n");
	dprintf(1, "[%.*d]", 20, 45);
	printf("\n");
	ft_printf("[%.*d]", 20, 45);
	printf("\n");
	dprintf(1, "[%20.10d]", 45);
	printf("\n");
	ft_printf("[%20.10d]", 45);
	printf("\n");
	dprintf(1, "[%1.3d]", 23);
	printf("\n");
	ft_printf("[%1.3d]", 23);
	printf("\n");
	dprintf(1, "[%20.3s]", "salut");
	printf("\n");
	ft_printf("[%20.3s]", "salut");
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%5.0d]", 0));
	printf("\n");
	printf("%d", ft_printf("[%5.0d]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%50.10d]", 10));
	printf("\n");
	printf("%d", ft_printf("[%50.10d]", 10));
	printf("\n");
	printf("%d", dprintf(1, "[%00.5d]", 41));
	printf("\n");
	printf("%d", ft_printf("[%00.5d]", 41));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%00.5d]", -41));
	printf("\n");
	printf("%d", ft_printf("[%00.5d]", -41));
	printf("\n");
	printf("%d", dprintf(1, "[%010.5d]", -42));
	printf("\n");
	printf("%d", ft_printf("[%010.5d]", -42));
	printf("\n");
	printf("%d", dprintf(1, "[%10.5d]", -24));
	printf("\n");
	printf("%d", ft_printf("[%10.5d]", -24));
	printf("\n");
	printf("%d", dprintf(1, "[%010.5d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%010.5d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%010.0d]", -43));
	printf("\n");
	printf("%d", ft_printf("[%010.0d]", -43));
	printf("\n");
	printf("%d", dprintf(1, "[%010.0d]", 43));
	printf("\n");
	printf("%d", ft_printf("[%010.0d]", 43));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%50.1d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%50.1d]", 42));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%-5.3d]", 31));
	printf("\n");
	printf("%d", ft_printf("[%-5.3d]", 31));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%01d]", -1));
	printf("\n");
	printf("%d", ft_printf("[%01d]", -1));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%u]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%u]", UINT_MAX + 1));
	printf("\n");
	printf("%d", ft_printf("[%u]", UINT_MAX + 1));
	printf("\n");
	printf("%d", dprintf(1, "[%1u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%1u]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%10u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%10u]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%.1u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%.1u]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%.2u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%.2u]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%1.1s]", ""));
	printf("\n");
	printf("%d", ft_printf("[%1.1s]", ""));
	printf("\n");
	printf("%d", dprintf(1, "[%2.10s]", ""));
	printf("\n");
	printf("%d", ft_printf("[%2.10s]", ""));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%6.10s]", "hello"));
	printf("\n");
	printf("%d", ft_printf("[%6.10s]", "hello"));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%11.10d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%11.10d]", INT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%11.10i]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%11.10i]", INT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%12.10d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%12.10d]", 2147483646));
	printf("\n");
	printf("%d", dprintf(1, "[%9.10d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%9.10d]", INT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.10d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.10d]", INT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.10i]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.10i]", INT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-12.10d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-12.10d]", 2147483646));
	printf("\n");
	printf("%d", dprintf(1, "[%-50.9d]", INT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-50.9d]", INT_MAX));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%11.10u]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%11.10u]", UINT_MAX));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%2.0u]", -1));
	printf("\n");
	printf("%d", ft_printf("[%2.0u]", -1));
	printf("\n");
	printf("%d", dprintf(1, "[%3.1u]", -1));
	printf("\n");
	printf("%d", ft_printf("[%3.1u]", -1));
	printf("\n");
	printf("%d", dprintf(1, "[%3.2u]", -1));
	printf("\n");
	printf("%d", ft_printf("[%3.2u]", -1));
	printf("\n");
	printf("%d", dprintf(1, "[%9.2u]", -1));
	printf("\n");
	printf("%d", ft_printf("[%9.2u]", -1));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%-2.0u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%-2.0u]", 0));
	printf("\n");
	printf("\n");
	printf("%d", dprintf(1, "[%-1.0u]", 0));
	printf("\n");
	printf("%d", ft_printf("[%-1.0u]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.10x]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.10x]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.10X]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.10X]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-1.0x]", 0));
	printf("\n");
	printf("%d", ft_printf("[%-1.0x]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.0X]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.0X]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%9.10x]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%9.10x]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%11.0X]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%11.0X]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%-11.10X]", UINT_MAX));
	printf("\n");
	printf("%d", ft_printf("[%-11.10X]", UINT_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%01.0i]", 0));
	printf("\n");
	printf("%d", ft_printf("[%01.0i]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%010.0i]", 0));
	printf("\n");
	printf("%d", ft_printf("[%010.0i]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%010.0d]", 0));
	printf("\n");
	printf("%d", ft_printf("[%010.0d]", 0));
	printf("\n");
	printf("%d", dprintf(1, "[%-6.10s]", "Hello"));
	printf("\n");
	printf("%d", ft_printf("[%-6.10s]", "Hello"));
	printf("\n");
	printf("MARCHE PAS MAIS C NORMAL");
	printf("%d", dprintf(1, "[%0-10d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%0-10d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%0--10d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%0--10d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%-010d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%-010d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%*d]", 10, 42));
	printf("\n");
	printf("%d", ft_printf("[%*d]", 10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%0*d]", 10, 42));
	printf("\n");
	printf("%d", ft_printf("[%0*d]", 10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%0*d]", 10, -42));
	printf("\n");
	printf("%d", ft_printf("[%0*d]", 10, -42));
	printf("\n");
	printf("%d", dprintf(1, "[%0*d]", -10, 42));
	printf("\n");
	printf("%d", ft_printf("[%0*d]", -10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%-*d]", -10, 42));
	printf("\n");
	printf("%d", ft_printf("[%-*d]", -10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%0*d]", 0, 42));
	printf("\n");
	printf("%d", ft_printf("[%0*d]", 0, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%.*d]", 0, 42));
	printf("\n");
	printf("%d", ft_printf("[%.*d]", 0, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%.*d]", -10, 42));
	printf("\n");
	printf("%d", ft_printf("[%.*d]", -10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%.*d]", 0, 0));
	printf("\n");
	printf("%d", ft_printf("[%.*d]", 0, 0));
	printf("\n");
	printf("%d", dprintf(1, "[%10.*d]", 10, 42));
	printf("\n");
	printf("%d", ft_printf("[%10.*d]", 10, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%.*s]", -3, "Hello"));
	printf("\n");
	printf("%d", ft_printf("[%.*s]", -3, "Hello"));
	printf("\n");
	printf("LA?\n");
	//
	printf("%d", dprintf(1, "[%*.*d]", 1, -50, 42));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 1, -50, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%*.*d]", -50, 1, 42));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", -50, 1, 42));
	printf("\n");
	printf("%d", dprintf(1, "[%*.*d]", 5, 0, 0));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 5, 0, 0));
	printf("\n");
	printf("%d", dprintf(1, "[%*.*s]", 0, -5, "Hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 0, -5, "Hello"));
	printf("\n");
	printf("%d", dprintf(1, "[%-----5d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%-----5d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%%]"));
	printf("\n");
	printf("%d", ft_printf("[%%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%10%]"));
	printf("\n");
	printf("%d", ft_printf("[%10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%-10%]"));
	printf("\n");
	printf("%d", ft_printf("[%-10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%010%]"));
	printf("\n");
	printf("%d", ft_printf("[%010%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%.1%]"));
	printf("\n");
	printf("%d", ft_printf("[%.1%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%.10%]"));
	printf("\n");
	printf("%d", ft_printf("[%.10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%1.0%]"));
	printf("\n");
	printf("%d", ft_printf("[%1.0%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%2.10%]"));
	printf("\n");
	printf("%d", ft_printf("[%2.10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%05.10%]"));
	printf("\n");
	printf("%d", ft_printf("[%05.10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%-2.10%]"));
	printf("\n");
	printf("%d", ft_printf("[%-2.10%]"));
	printf("\n");
	printf("%d", dprintf(1, "[%05.1d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%05.1d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%05.1x]", 42));
	printf("\n");
	printf("%d", ft_printf("[%05.1x]", 42));
	printf("\n");
	printf("LA?\n");
	//
	printf("%d", dprintf(1, "[%*.*s]", 5, 10, "hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 5, 10, "hello"));
	printf("\n");
	printf("%d", dprintf(1, "[%*.*d]", 5, 0, 0));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 5, 0, 0));
	printf("\n");
	printf("%d", dprintf(1, "[%*.*s]", 2, -5, "Hello"));
	printf("\n");
	printf("%d", ft_printf("[%*.*s]", 2, -5, "Hello"));
	printf("\n");
	printf("%d", dprintf(1, "[%10.3x]", -24));
	printf("\n");
	printf("%d", ft_printf("[%10.3x]", -24));
	printf("\n");
	printf("%d", dprintf(1, "[%10.5x]", -24));
	printf("\n");
	printf("%d", ft_printf("[%10.5x]", -24));
	printf("\n");
	printf("%d", printf("[%*.*d]", 25, 10, 45));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 25, 10, 45));
	printf("\n");
	printf("%d", printf("[%*.*d]", 0, 0, 45));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 0, 0, 45));
	printf("\n");
	printf("%d", printf("[%*.*d]", 0, -5, 45));
	printf("\n");
	printf("%d", ft_printf("[%*.*d]", 0, -5, 45));
	printf("\n");
	printf("%d", dprintf(1, "[%20.10s]", "Salut"));
	printf("\n");
	printf("%d", ft_printf("[%20.10s]", "Salut"));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)1));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)1));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)-1));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)-1));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)1000));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)1000));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)ULONG_MAX));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)ULONG_MAX));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)ULONG_MAX + 1));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)ULONG_MAX + 1));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", (void*)INT_MAX - 1));
	printf("\n");
	printf("%d", ft_printf("[%p]", (void*)INT_MAX - 1));
	printf("\n");
	printf("%d", dprintf(1, "[%5p]", (void*)42));
	printf("\n");
	printf("%d", ft_printf("[%5p]", (void*)42));
	printf("\n");
	printf("%d", dprintf(1, "[%-5p]", (void*)42));
	printf("\n");
	printf("%d", ft_printf("[%-5p]", (void*)42));
	printf("\n");
	printf("%d", dprintf(1, "[%0-10d]", 42));
	printf("\n");
	printf("%d", ft_printf("[%0-10d]", 42));
	printf("\n");
	printf("%d", dprintf(1, "[%25p]", &str));
	printf("\n");
	printf("%d", ft_printf("[%25p]", &str));
	printf("\n");
	printf("%d", dprintf(1, "[%-25p]", &str));
	printf("\n");
	printf("%d", ft_printf("[%-25p]", &str));
	printf("\n");
	printf("%d", dprintf(1, "[%25p]", 21474836478));
	printf("\n");
	printf("%d", ft_printf("[%25p]", 21474836478));
	printf("\n");
	printf("%d", dprintf(1, "[%25p]", 214748364789));
	printf("\n");
	printf("%d", ft_printf("[%25p]", 214748364789));
	printf("\n");
	printf("%d", printf("[%*%]", 45));
	printf("\n");
	printf("%d", ft_printf("[%*%]", 45));
	printf("\n");
	printf("%d", printf("[%*d]", 25, 10));
	printf("\n");
	printf("%d", ft_printf("[%*d]", 25, 10));
	printf("\n");
	printf("%d", printf("[%.015s]", "bonjour"));
	printf("\n");
	printf("%d", ft_printf("[%.015s]", "bonjour"));
	printf("\n");
	printf("%d", printf("[%.015d]", 45));
	printf("\n");
	printf("%d", ft_printf("[%.015d]", 45));
	printf("\n");
	printf("%d", printf("[%.*s]", -50, "bonjour"));
	printf("\n");
	printf("%d", ft_printf("[%.*s]", -50, "bonjour"));
	printf("\n");
	printf("%d", printf("[%.*s]", 50, "bonjour"));
	printf("\n");
	printf("%d", ft_printf("[%.*s]", 50, "bonjour"));
	printf("\n");


	printf("%d", printf("[%.p]", "bonjour"));
	printf("\n");
	printf("%d", ft_printf("[%.p]", "bonjour"));
	printf("\n");
	printf("%d", printf("[%.p]", 54615146));
	printf("\n");
	printf("%d", ft_printf("[%.p]", 54615146));
	printf("\n");

	printf("%d", printf("[%0.*d]", -45, 0));
	printf("\n");
	printf("%d", ft_printf("[%0.*d]", -45, 0));
	printf("\n");
	printf("%d", printf("[%0.*d]", 10, 0));
	printf("\n");
	printf("%d", ft_printf("[%0.*d]", 10, 0));
	printf("\n");
	printf("%d", printf("[%0.*d]", -45, -2147483648));
	printf("\n");
	printf("%d", ft_printf("[%0.*d]", -45, -2147483648));
	printf("\n");
	printf("%d", printf("[%*.0d]", 10, 945178));
	printf("\n");
	printf("%d", ft_printf("[%*.0d]", 10, 945178));
	printf("\n");


	printf("%d", printf("[%s]", ""));
	printf("\n");
	printf("%d", ft_printf("[%s]", ""));
	printf("\n");


	printf("%d", printf("[%.d]", -45));
	printf("\n");
	printf("%d", ft_printf("[%.d]", -45));
	printf("\n");



	printf("%d", printf("[%4.p]", &str));
	printf("\n");
	printf("%d", ft_printf("[%4.p]", &str));
	printf("\n");

	printf("%d", printf("[%-1.1s]", ""));
	printf("\n");
	printf("%d", ft_printf("[%-1.1s]", ""));
	printf("\n");
	printf("%d", printf("[%1.1s]", ""));
	printf("\n");
	printf("%d", ft_printf("[%1.1s]", ""));
	printf("\n");

 printf("%d", printf("\t|%5s|\n \tsalut|%.6d|\n  tu \t|%-9p|\n vas \t|%-15u|\n bien \t|%14X|\n ? \t|%u|\n \t|%010i|\n \t|%c|\n \t|%s|\n \t|%p|\n \t|%019d|\n \t|%-5u|\n \t|%05X|\n \t|%2.8u|\n \t|%9.9i|\n \t|%c|\n \t|%.2s|\n \t|%d|\n \t|%p|\n salut \t|%u|\n \t|*.5%X|\n \t|%u|\n \t|%*.*i|\n \t|%c|\n", "bonjour", 59, "bonj", 168, 8, 9, 87, 'c', "bonjour", "bonj", 0, 168, 8, 9, 0, 'c', "bonjour", 59, "bonj", 10, 8, 9, 5, 10, -87, 'c'));

printf("%d", ft_printf("\t|%5s|\n \tsalut|%.6d|\n  tu \t|%-9p|\n vas \t|%-15u|\n bien \t|%14X|\n ? \t|%u|\n \t|%010i|\n \t|%c|\n \t|%s|\n \t|%p|\n \t|%019d|\n \t|%-5u|\n \t|%05X|\n \t|%2.8u|\n \t|%9.9i|\n \t|%c|\n \t|%.2s|\n \t|%d|\n \t|%p|\n salut \t|%u|\n \t|*.5%X|\n \t|%u|\n \t|%*.*i|\n \t|%c|\n", "bonjour", 59, "bonj", 168, 8, 9, 87, 'c', "bonjour", "bonj", 0, 168, 8, 9, 0, 'c', "bonjour", 59, "bonj", 10, 8, 9, 5, 10, -87, 'c'));









}
