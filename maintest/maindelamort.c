/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   maindelamort.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thomasgrangeon <thomasgrangeon@student.    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 13:25:19 by manaccac     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/27 23:02:42 by thomasgrang ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <limits.h>

int	main()
{

	printf("*%d*\n", ft_printf("hello"));
	printf("*%d*\n", printf("hello"));

	printf("*%d*\n", ft_printf("hello%10d", 10));
	printf("*%d*\n", printf("hello%10d", 10));

	printf("*%d*\n", ft_printf("hello%-10d", 10));
	printf("*%d*\n", printf("hello%-10d", 10));

	printf("*%d*\n", ft_printf("hello%--10d", 10));
	printf("*%d*\n", printf("hello%--10d", 10));

	printf("*%d*\n", ft_printf("hello%10.20d", 10));
	printf("*%d*\n", printf("hello%10.20d", 10));

	printf("*%d*\n", ft_printf("hello%010d", 10));
	printf("*%d*\n", printf("hello%010d", 10));

	printf("*%d*\n", ft_printf("hello%0010d", 10));
	printf("*%d*\n", printf("hello%0010d", 10));

	printf("*%d*\n", ft_printf("hello%*d", -10, 10));
	printf("*%d*\n", printf("hello%*d", -10, 10));

	printf("*%d*\n", ft_printf("hello%*d", 10, 10));
	printf("*%d*\n", printf("hello%*d", 10, 10));

	printf("*%d*\n", ft_printf("hello%*.11d", 10, 12));
	printf("*%d*\n", printf("hello%*.11d", 10, 12));

	printf("*%d*\n", ft_printf("hello%*.*d", 10, 11, 12));
	printf("*%d*\n", printf("hello%*.*d", 10, 11, 12));



	printf("*%d*\n", ft_printf("%10s", "hello"));
	printf("*%d*\n", printf("%10s", "hello"));
	printf("*%d*\n", ft_printf("%-10s", "hello"));
	printf("*%d*\n", printf("%-10s", "hello"));
	printf("*%d*\n", ft_printf("%10s", "hello"));
	printf("*%d*\n", printf("%10s", "hello"));
	printf("*%d*\n", ft_printf("%2s", "hello"));
	printf("*%d*\n", printf("%2s", "hello"));
	printf("*%d*\n", ft_printf("%10.8d", 13));
	printf("*%d*\n", printf("%10.8d", 13));
	printf("*%d*\n", ft_printf("%-10.8d", 13));
	printf("*%d*\n", printf("%-10.8d", 13));
	printf("*%d*\n", ft_printf("%010.8d", 13));
	printf("*%d*\n", printf("%010.8d", 13));


	printf("*%d*\n", ft_printf("%.2s", "hello"));
	printf("*%d*\n", printf("%.2s", "hello"));

	printf("*%d*\n", ft_printf("%0.0d", 13));
	printf("*%d*\n", printf("%0.0d", 13));
	printf("*%d*\n", ft_printf("%2.2d", 13));
	printf("*%d*\n", printf("%2.2d", 13));

	printf("*%d*\n", ft_printf("%0.0s", "slt"));
	printf("*%d*\n", printf("%0.0s", "slt"));

	printf("*%d*\n", ft_printf("%0.0d", 0));
	printf("*%d*\n", printf("%0.0d", 0));
	printf("*%d*\n", ft_printf("%1.0d", 0));
	printf("*%d*\n", printf("%1.0d", 0));
	printf("*%d*\n", ft_printf("%d", 0));
	printf("*%d*\n", printf("%d", 0));

	printf("*%d*\n", ft_printf("%010d", -10));
	printf("*%d*\n", printf("%010d", -10));
	printf("*%d*\n", ft_printf("%010i", -10));
	printf("*%d*\n", printf("%010i", -10));
	printf("*%d*\n", ft_printf("%10d", -10));
	printf("*%d*\n", printf("%10d", -10));
	printf("*%d*\n", ft_printf("%10i", -10));
	printf("*%d*\n", printf("%10i", -10));
	printf("*%d*\n", ft_printf("%-10d", -10));
	printf("*%d*\n", printf("%-10d", -10));
	printf("*%d*\n", ft_printf("%-10i", -10));
	printf("*%d*\n", printf("%-10i", -10));


	printf("*%d*\n", ft_printf("%0.54d", -10));
	printf("*%d*\n", printf("%0.54d", -10));

	printf("*%d*\n", ft_printf("%0.*d", -10, 6));
	printf("*%d*\n", printf("%0.*d", -10, 6));

	printf("*%d*\n", ft_printf("%.0s", "slt"));
	printf("*%d*\n", printf("%.0s", "slt"));


	printf("*%d*\n", ft_printf("%*.10d", 10, 0));
	printf("*%d*\n", printf("%*.10d", 10, 0));
	printf("*%d*\n", ft_printf("%*.10d", 0, -2147483648));
	printf("*%d*\n", printf("%*.10d", 0, -2147483648));
	printf("*%d*\n", ft_printf("%*.10d", 10, -2147483648));
	printf("*%d*\n", printf("%*.10d", 10, -2147483648));
	printf("*%d*\n", ft_printf("%*.0d", 10, -2147483648));
	printf("*%d*\n", printf("%*.0d", 10, -2147483648));
	printf("*%d*\n", ft_printf("%0*.0d", 10, -2147483648));
	printf("*%d*\n", printf("%0*.0d", 10, -2147483648));
	printf("\n");

	printf("*%d*\n", ft_printf("%*.0d", 10, -1482235437));
	printf("*%d*\n", printf("%*.0d", 10, -1482235437));
	printf("*%d*\n", ft_printf("%*.0d", 10, -928979799));
	printf("*%d*\n", printf("%*.0d", 10, -928979799));
	printf("*%d*\n", ft_printf("%d", 0));
	printf("*%d*\n", printf("%d", 0));

	printf("*%d*\n", ft_printf("%00010.d", 5));
	printf("*%d*\n", printf("%00010.d", 5));

	printf("*%d*\n", ft_printf("{%---100.10s}", "slt"));
	printf("*%d*\n", printf("{%---100.10s}", "slt"));



	printf("*%d*\n", ft_printf("%0.*d", 10, 0));
	printf("*%d*\n", printf("%0.*d", 10, 0));

	printf("*%d*\n", ft_printf("%0.*d", 10, -2147483648));
	printf("*%d*\n", printf("%0.*d", 10, -2147483648));

	printf("*%d*\n", ft_printf("%0.*d", 10, 2147483647));
	printf("*%d*\n", printf("%0.*d", 10, 2147483647));

	printf("*%d*\n", ft_printf("%0.*d", 10, 9));
	printf("*%d*\n", printf("%0.*d", 10, 9));

	printf("*%d*\n", ft_printf("%0.*d", 10, 0));
	printf("*%d*\n", printf("%0.*d", 10, 0));

	printf("*%d*\n", ft_printf("%0.*d", 10, 0));
	printf("*%d*\n", printf("%0.*d", 10, 0));

	printf("*%d*\n", ft_printf("%0.*d", 10, -88));
	printf("*%d*\n", printf("%0.*d", 10, -88));

	printf("*%d*\n", ft_printf("%0.*d", 10, -97876813));
	printf("*%d*\n", printf("%0.*d", 10, -97876813));


	printf("*%d*\n", ft_printf("%10.*d", 0, -100000000));
	printf("*%d*\n", printf("%10.*d", 0, -100000000));


	printf("*%d*\n", ft_printf("%10.*d", 10, -100000000));
	printf("*%d*\n", printf("%10.*d", 10, -100000000));

	printf("*%d*\n", ft_printf("%0.*d", 10, -100000000));
	printf("*%d*\n", printf("%0.*d", 10, -100000000));

	printf("*%d*\n", ft_printf("%0.*d", 10, -899380291));
	printf("*%d*\n", printf("%0.*d", 10, -899380291));

	printf("*%d*\n", ft_printf("%0.*d", 10, -944452023));
	printf("*%d*\n", printf("%0.*d", 10, -944452023));



	printf("*%d*\n", ft_printf("%0.*d", 10, -4));
	printf("*%d*\n", printf("%0.*d", 10, -4));

	printf("*%d*\n", ft_printf("%x", 4294967295));
	printf("*%d*\n", printf("%x", 4294967295));

	printf("*%d*\n", ft_printf("%x", 0));
	printf("*%d*\n", printf("%x", 0));

	printf("*%d*\n", ft_printf("%0x", 0));
	printf("*%d*\n", printf("%0x", 0));

	printf("*%d*\n", ft_printf("%.0x", 0));
	printf("*%d*\n", printf("%.0x", 0));

	printf("*%d*\n", ft_printf("%0.0x", 0));
	printf("*%d*\n", printf("%0.0x", 0));


	printf("*%d*\n", ft_printf("%50s %*d %u %*p %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 15, 0, 1075800008, -9, -473946208, '@'));
	printf("*%d*\n", printf("%50s %*d %u %*p %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 15, 0, 1075800008, -9, -473946208, '@'));


	printf("*%d*\n", ft_printf("%50s", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu"));
	printf("*%d*\n", printf("%50s", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu"));


	printf("*%d*\n", ft_printf("%*d", 15, 0));
	printf("*%d*\n", printf("%*d", 15, 0));

	printf("*%d*\n", ft_printf("%.54d", 0));
	printf("*%d*\n", printf("%.54d", 0));


	printf("*%d*\n", ft_printf("%u", 1075800008));
	printf("*%d*\n", printf("%u", 1075800008));


	printf("*%d*\n", ft_printf("%*p", -9, -473946208));
	printf("*%d*\n", printf("%*p", -9, -473946208));


	printf("*%d*\n", ft_printf("%c", '@'));
	printf("*%d*\n", printf("%c", '@'));

	printf("*%d*\n", ft_printf("%50s %u %*p %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 1075800008, -9, -473946208, '@'));
	printf("*%d*\n", printf("%50s %u %*p %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 1075800008, -9, -473946208, '@'));

	printf("*%d*\n", ft_printf("%50s %*d %u %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 15, 0, 1075800008, '@'));
	printf("*%d*\n", printf("%50s %*d %u %c", "9pvwylDRZSFM5BL8Yckzfr39Ms4UBTnu", 15, 0, 1075800008, '@'));


	printf("*%d*\n", ft_printf("%*.0u", -45, 0));
	printf("*%d*\n", printf("%*.0u", -45, 0));

	printf("*%d*\n", ft_printf("%*u", -45, 0));
	printf("*%d*\n", printf("%*u", -45, 0));

	printf("*%d*\n", ft_printf("%54.0d", 0));
	printf("*%d*\n", printf("%54.0d", 0));

	printf("*%d*\n", ft_printf("%54.3d", 0));
	printf("*%d*\n", printf("%54.3d", 0));

	printf("*%d*\n", ft_printf("%0.*u", -45, 0));
	printf("*%d*\n", printf("%0.*u", -45, 0));

	printf("*%d*\n", ft_printf("%0.*u", -45, 30));
	printf("*%d*\n", printf("%0.*u", -45, 30));

	printf("*%d*\n", ft_printf("%*u", -45, 0));
	printf("*%d*\n", printf("%*u", -45, 0));

	printf("*%d*\n", ft_printf("%u", 0));
	printf("*%d*\n", printf("%u", 0));

	printf("*%d*\n", ft_printf("%0.0x", 0));
	printf("*%d*\n", printf("%0.0x", 0));

	printf("*%d*\n", ft_printf("%x", 0));
	printf("*%d*\n", printf("%x", 0));

	printf("*%d*\n", ft_printf("%54.0x", 0));
	printf("*%d*\n", printf("%54.0x", 0));

	printf("*%d*\n", ft_printf("%*u", 45, 0));
	printf("*%d*\n", printf("%*u", 45, 0));

	printf("*%d*\n", ft_printf("%0.54%"));
	printf("*%d*\n", printf("%0.54%"));

	printf("*%d*\n", ft_printf("%0.*%", 10));
	printf("*%d*\n", printf("%0.*%", 10));

	printf("*%d*\n", ft_printf("%*.54d", 0, -14));
	printf("*%d*\n", printf("%*.54d", 0, -14));

	printf("*%d*\n", ft_printf("%*.54d", 1, -14));
	printf("*%d*\n", printf("%*.54d", 1, -14));

	printf("*%d*\n", ft_printf("%010.0d", -66));
	printf("*%d*\n", printf("%010.0d", -66));

	printf("*%d*\n", ft_printf("%.p", 0));
	printf("*%d*\n", printf("%.p", 0));

	printf("*%d*\n", ft_printf("%10.p", 0));
	printf("*%d*\n", printf("%10.p", 0));

	printf("*%d*\n", ft_printf("%1p", 0));
	printf("*%d*\n", printf("%1p", 0));


	printf("*%d*\n", ft_printf("%10.1i", 708));
	printf("*%d*\n", printf("%10.1i", 708));

	printf("*%d*\n", ft_printf("%1.10i", -2147483648));
	printf("*%d*\n", printf("%1.10i", -2147483648));

	printf("*%d*\n", ft_printf("%10.1d", 708));
	printf("*%d*\n", printf("%10.1d", 708));

	printf("*%d*\n", ft_printf("%1.10d", -2147483648));
	printf("*%d*\n", printf("%1.10d", -2147483648));

	printf("*%d*\n", ft_printf("%.i", 0));
	printf("*%d*\n", printf("%.i", 0));

	printf("*%d*\n", ft_printf("%.d", 0));
	printf("*%d*\n", printf("%.d", 0));

	printf("*%d*\n", ft_printf("0%c", 0));
	printf("*%d*\n", printf("0%c", 0));

	printf("*%d*\n", ft_printf("%c", '\0'));
	printf("*%d*\n", printf("%c", '\0'));

	printf("*%d*\n", ft_printf("%1x", 0));
	printf("*%d*\n", printf("%1x", 0));

	printf("*%d*\n", ft_printf("%10x", 0));
	printf("*%d*\n", printf("%10x", 0));

	printf("*%d*\n", ft_printf("%-1x", 0));
	printf("*%d*\n", printf("%-1x", 0));

	printf("*%d*\n", ft_printf("%-10x", 0));
	printf("*%d*\n", printf("%-10x", 0));


	printf("*%d*\n", ft_printf("%1.0x", 0));
	printf("*%d*\n", printf("%1.0x", 0));

	printf("*%d*\n", ft_printf("%10.0x", 0));
	printf("*%d*\n", printf("%10.0x", 0));

	printf("*%d*\n", ft_printf("%1.1x", 0));
	printf("*%d*\n", printf("%1.1x", 0));

	printf("*%d*\n", ft_printf("%10.1x", 0));
	printf("*%d*\n", printf("%10.1x", 0));

	printf("*%d*\n", ft_printf("%.1i", 42));
	printf("*%d*\n", printf("%.1i", 42));

	printf("*%d*\n", ft_printf("%.1d", 42));
	printf("*%d*\n", printf("%.1d", 42));

	printf("*%d*\n", ft_printf("%.1i", -42));
	printf("*%d*\n", printf("%.1i", -42));

	printf("*%d*\n", ft_printf("%.1u", 42));
	printf("*%d*\n", printf("%.1u", 42));

	printf("*%d*\n", ft_printf("%1.0i", 0));
	printf("*%d*\n", printf("%1.0i", 0));

	printf("*%d*\n", ft_printf("%1.0u", 0));
	printf("*%d*\n", printf("%1.0u", 0));

	printf("*%d*\n", ft_printf("%10.0u", 0));
	printf("*%d*\n", printf("%10.0u", 0));

	printf("*%d*\n", ft_printf("%2.1u", -1));
	printf("*%d*\n", printf("%2.1u", -1));

	printf("*%d*\n", ft_printf("%2.1x", -1));
	printf("*%d*\n", printf("%2.1x", -1));

	printf("*%d*\n", ft_printf("%2.1d", -1));
	printf("*%d*\n", printf("%2.1d", -1));

	printf("*%d*\n", ft_printf("%2.1i", -1));
	printf("*%d*\n", printf("%2.1i", -1));

	printf("*%d*\n", ft_printf("%1.1i", -1));
	printf("*%d*\n", printf("%1.1i", -1));

	printf("*%d*\n", ft_printf("%1.1d", -1));
	printf("*%d*\n", printf("%1.1d", -1));

	printf("*%d*\n", ft_printf("%3.1i", -1));
	printf("*%d*\n", printf("%3.1i", -1));

	printf("*%d*\n", ft_printf("%3.1d", -1));
	printf("*%d*\n", printf("%3.1d", -1));


	printf("*%d*\n", ft_printf("%3.2d", -1));
	printf("*%d*\n", printf("%3.2d", -1));

	printf("*%d*\n", ft_printf("%30.20i", -1));
	printf("*%d*\n", printf("%30.20i", -1));

	printf("*%d*\n", ft_printf("%30.20d", -1));
	printf("*%d*\n", printf("%30.20d", -1));

	printf("*%d*\n", ft_printf("%4.3i", -10));
	printf("*%d*\n", printf("%4.3i", -10));

	printf("*%d*\n", ft_printf("%4.3d", -10));
	printf("*%d*\n", printf("%4.3d", -10));

	printf("*%d*\n", ft_printf("%30.20i", -10));
	printf("*%d*\n", printf("%30.20i", -10));

	printf("*%d*\n", ft_printf("%30.20d", -10));
	printf("*%d*\n", printf("%30.20d", -10));

	printf("*%d*\n", ft_printf("%-3.2i", -1));
	printf("*%d*\n", printf("%-3.2i", -1));

	printf("*%d*\n", ft_printf("%-3.2d", -1));
	printf("*%d*\n", printf("%-3.2d", -1));

	printf("*%d*\n", ft_printf("%-4.2d", -1));
	printf("*%d*\n", printf("%-4.2d", -1));

	printf("*%d*\n", ft_printf("%-3.1i", -1));
	printf("*%d*\n", printf("%-3.1i", -1));

	printf("*%d*\n", ft_printf("%-4.2i", -10));
	printf("*%d*\n", printf("%-4.2i", -10));

	printf("*%d*\n", ft_printf("%01.0i", 0));
	printf("*%d*\n", printf("%01.0i", 0));

	printf("*%d*\n", ft_printf("%01.0u", 0));
	printf("*%d*\n", printf("%01.0u", 0));

	printf("*%d*\n", ft_printf("%02.0u", 0));
	printf("*%d*\n", printf("%02.0u", 0));

	printf("*%d*\n", ft_printf("%05.3u", 0));
	printf("*%d*\n", printf("%05.3u", 0));

	printf("*%d*\n", ft_printf("%010.0i", 1));
	printf("*%d*\n", printf("%010.0i", 1));

	printf("*%d*\n", ft_printf("%01.10i", -1));
	printf("*%d*\n", printf("%01.10i", -1));

	printf("*%d*\n", ft_printf("%03.4i", -1));
	printf("*%d*\n", printf("%03.4i", -1));




	printf("*%d*\n", ft_printf("%03.2i", -1));
	printf("*%d*\n", printf("%03.2i", -1));

	printf("*%d*\n", ft_printf("%03.0i", -1));
	printf("*%d*\n", printf("%03.0i", -1));

	printf("*%d*\n", ft_printf("%03.1i", -1));
	printf("*%d*\n", printf("%03.1i", -1));



	printf("%d", ft_printf("\t|%5s|\n \tsalut|%.6d|\n  tu \t|%-9p|\n vas \t|%-15u|\n bien \t|%14X|\n ? \t|%u|\n \t|%010i|\n \t|%c|\n \t|%s|\n \t|%p|\n \t|%019d|\n \t|%-5u|\n \t|%05X|\n \t|%2.8u|\n \t|%9.9i|\n \t|%c|\n \t|%.2s|\n \t|%d|\n \t|%p|\n salut \t|%u|\n \t|*.5%X|\n \t|%u|\n \t|%*.*i|\n \t|%c|\n", "bonjour", 59, "bonj", 168, 8, 9, 87, 'c', "bonjour", "bonj", 0, 168, 8, 9, 0, 'c', "bonjour", 59, "bonj", 10, 8, 9, 5, 10, -87, 'c'));

	printf("%d", printf("\t|%5s|\n \tsalut|%.6d|\n  tu \t|%-9p|\n vas \t|%-15u|\n bien \t|%14X|\n ? \t|%u|\n \t|%010i|\n \t|%c|\n \t|%s|\n \t|%p|\n \t|%019d|\n \t|%-5u|\n \t|%05X|\n \t|%2.8u|\n \t|%9.9i|\n \t|%c|\n \t|%.2s|\n \t|%d|\n \t|%p|\n salut \t|%u|\n \t|*.5%X|\n \t|%u|\n \t|%*.*i|\n \t|%c|\n", "bonjour", 59, "bonj", 168, 8, 9, 87, 'c', "bonjour", "bonj", 0, 168, 8, 9, 0, 'c', "bonjour", 59, "bonj", 10, 8, 9, 5, 10, -87, 'c'));




	printf("*%d*\n", ft_printf("%*.*s", 5, 10, "hello"));
	printf("*%d*\n", printf("%*.*s", 5, 10, "hello"));

	printf("*%d*\n", ft_printf("%*.*s", 0, -5, "hello"));
	printf("*%d*\n", printf("%*.*s", 0, -5, "hello"));

	printf("*%d*\n", ft_printf("%*.*s", 2, -5, "hello"));
	printf("*%d*\n", printf("%*.*s", 2, -5, "hello"));

	printf("*%d*\n", ft_printf("%*.*s", 2, 5, "hello"));
	printf("*%d*\n", printf("%*.*s", 2, 5, "hello"));

	printf("*%d*\n", ft_printf("%*.*s", 5, 2, "hello"));
	printf("*%d*\n", printf("%*.*s", 5, 2, "hello"));

	printf("*%d*\n", ft_printf("%*.*s", 5, 5, "hello"));
	printf("*%d*\n", printf("%*.*s", 5, 5, "hello"));

	printf("*%d*\n", ft_printf("%20.10s", "hello"));
	printf("*%d*\n", printf("%20.10s", "hello"));

	printf("*%d*\n", ft_printf("%20.10s", NULL));
	printf("*%d*\n", printf("%20.10s", NULL));



	printf("*%d*\n", ft_printf("%1.2%"));
	printf("*%d*\n", printf("%1.2%"));

	printf("*%d*\n", ft_printf("%-1.2%"));
	printf("*%d*\n", printf("%-1.2%"));

	printf("*%d*\n", ft_printf("%10.2%"));
	printf("*%d*\n", printf("%10.2%"));

	printf("*%d*\n", ft_printf("%-10.2%"));
	printf("*%d*\n", printf("%-10.2%"));


	printf("*%d*\n", ft_printf("%1.10%"));
	printf("*%d*\n", printf("%1.10%"));

	printf("*%d*\n", ft_printf("%-1.10%"));
	printf("*%d*\n", printf("%-1.10%"));

	printf("*%d*\n", ft_printf("%10.10%"));
	printf("*%d*\n", printf("%10.10%"));

	printf("*%d*\n", ft_printf("%-10.10%"));
	printf("*%d*\n", printf("%-10.10%"));


	printf("*%d*\n", ft_printf("%1.10%"));
	printf("*%d*\n", printf("%1.10%"));





	printf("*%d*\n", ft_printf("%----0004d", 20));
	printf("*%d*\n", printf("%----0004d", 20));

	printf("*%d*\n", ft_printf("%000---4d", 20));
	printf("*%d*\n", printf("%000---4d", 20));


	printf("*%d*\n", printf("{%---2.p}\n", "hello"));
	printf("*%d*\n", ft_printf("{%---2.p}\n", "hello"));

	printf("*%d*\n", printf("{%0002.p}\n", "hello"));
	printf("*%d*\n", ft_printf("{%0002.p}\n", "hello"));

	printf("*%d*\n", printf("{%---2u}\n", 5));
	printf("*%d*\n", ft_printf("{%---2u}\n", 5));

	printf("*%d*\n", printf("{%0002.u}\n", 5));
	printf("*%d*\n", ft_printf("{%0002.u}\n", 5));

	printf("%d", dprintf(1, "[%54.0u]", 3703157668));
	printf("\n");
	printf("%d", ft_printf("[%54.0u]", 3703157668));
	printf("\n");
	printf("%d", printf("|%-0*%|\n", 5));
	printf("%d", ft_printf("|%-0*%|\n", 5));
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
	printf("|%.%|\n");
	ft_printf("|%.%|\n");



	printf("*%d*\n", printf("{%---2.d}\n", 5));
	printf("*%d*\n", ft_printf("{%---2.d}\n", 5));


	printf("*%d*\n", printf("{%--2.d}\n", 5));
	printf("*%d*\n", ft_printf("{%--2.d}\n", 5));


	printf("*%d*\n", printf("{%---2d}\n", 5));
	printf("*%d*\n", ft_printf("{%---2d}\n", 5));

	printf("*%d*\n", printf("{%0002.d}\n", 5));
	printf("*%d*\n", ft_printf("{%0002.d}\n", 5));

	printf("*%d*\n", printf("{%0002d}\n", 5));
	printf("*%d*\n", ft_printf("{%0002d}\n", 5));

	printf("*%d*\n", printf("{%---2.10s}\n", "hello"));
	printf("*%d*\n", ft_printf("{%---2.10s}\n", "hello"));

	printf("*%d*\n", printf("{%0002.10s}\n", "hello"));
	printf("*%d*\n", ft_printf("{%0002.10s}\n", "hello"));

	printf("*%d*\n", printf("{%-----------2d}\n", 5));
	printf("*%d*\n", ft_printf("{%-----------2d}\n", 5));

	printf("*%d*\n", printf("{%000000000002.d}\n", 5));
	printf("*%d*\n", ft_printf("{%000000000002.d}\n", 5));

	printf("*%d*\n", printf("{%-----------100.d}\n", 5));
	printf("*%d*\n", ft_printf("{%-----------100.d}\n", 5));


	printf("*%d*\n", printf("{%00000000000100.d}\n", 5));
	printf("*%d*\n", ft_printf("{%00000000000100.d}\n", 5));


	printf("*%d*\n", printf("{%-----------100.10s}\n", "slt"));
	printf("*%d*\n", ft_printf("{%-----------100.10s}\n", "slt"));






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


	printf("*%d*\n", printf("%.*s\n", 5, "patate"));
	printf("*%d*\n", ft_printf("%.*s\n", 5, "patate"));
	printf("*%d*\n", printf("%.*s\n", 50, "patate"));
	printf("*%d*\n", ft_printf("%.*s\n", 50, "patate"));
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
	printf("%*.*d\n", -50, 19, 42);
	ft_printf("%*.*d\n", -50, 19, 42);
	printf("%*.*d\n", -50, 99, 42);
	ft_printf("%*.*d\n", -50, 99, 42);
	printf("%*.*d\n", -50, 100, 42);
	ft_printf("%*.*d\n", -50, 100, 42);
	printf("%*.*d\n", -50, 1000, 42);
	ft_printf("%*.*d\n", -50, 1000, 42);

	printf("|%0*.*d|\n", -5, 0, 0);
	ft_printf("|%0*.*d|\n", -5, 0, 0);
	printf("|%0*d|\n", -10, 0);
	ft_printf("|%0*d|\n", -10, 0);

	printf("|%54.1s|\n", NULL);
	ft_printf("|%54.1s|\n", NULL);

	printf("|%54.0s|\n", "P");
	ft_printf("|%54.0s|\n", "P");


	printf("|%.*d|\n", 1, 45);
	ft_printf("|%.*d|\n", 1, 45);

	printf("|%-*d|\n", -9, -45);
	ft_printf("|%-*d|\n", -9, -45);

	printf("|%---*d|\n", -45, -40);
	ft_printf("|%--*d|\n", -45, -40);
	printf("|%000*d|\n", 45, -40);
	ft_printf("|%000*d|\n", 45, -40);


	printf("|%.54s|\n", NULL);
	ft_printf("|%.54s|\n", NULL);

	printf("%*.*d\n", -5000, 1000, 42);
	ft_printf("%*.*d\n", -5000, 1000, 42);

	ft_printf("|%-*.*s|\n", 5, 2, NULL);
	printf("|%-*.*s|\n", 5 ,2 ,NULL);

	int a;
	int b;
	int c = 0;


	a = printf("%s\n%c\n*%d*\n%i\n%x\n%X\n%p\n%u\n%%\n", "jean-pierre", c, c, c, 123456, 123456, &c, 123456);
	b = ft_printf("%s\n%c\n*%d*\n%i\n%x\n%X\n%p\n%u\n%%\n", "jean-pierre", c, c, c, 123456, 123456, &c, 123456);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = *%d*\n", a, b);

	a = printf("|%01.10x|\n", -1);
	b = ft_printf("|%01.10x|\n", -1);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = *%d*\n", a, b);

	a = printf("|%0*.*i|\n", -5, 0, 0);
	b = ft_printf("|%0*.*i|\n", -5, 0, 0);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = *%d*\n", a, b);


	a = printf("|%0-*%|\n", -5);
	b = ft_printf("|%0-*%|\n", -5);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = *%d*\n", a, b);

	a = printf("|%-0*%|\n", 5);
	b = ft_printf("|%-0*%|\n", 5);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = *%d*\n", a, b);

	a = printf("|%-*.*s|\n", 5 ,2 ,NULL);
	b = ft_printf("|%-*.*s|\n", 5, 2, NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");

	printf("printf = %d, moi = *%d*\n", a, b);

	a = printf("|%.p|\n", NULL);
	b = ft_printf("|%.p|\n", NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");

	printf("printf = %d, moi = *%d*\n", a, b);


	a = printf("|%.p|\n", NULL);
	b = ft_printf("|%.p|\n", NULL);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");

	printf("printf = %d, moi = *%d*\n", a, b);


	a = printf("|%.c|\n", '\0');
	b = ft_printf("|%.c|\n", '\0');
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");

	printf("printf = %d, moi = *%d*\n", a, b);

	printf("r*%d*\n", printf("|%2%|"));
	printf("r*%d*\n", ft_printf("|%2%|"));
	printf("2\n");
	printf("r*%d*\n", printf("|%02%|"));
	printf("r*%d*\n", ft_printf("|%02%|"));
	printf("3\n");
	printf("r*%d*\n", printf("|%.02%|"));
	printf("r*%d*\n", ft_printf("|%.02%|"));
	printf("4\n");
	printf("r*%d*\n", printf("|%.2%|"));
	printf("r*%d*\n", ft_printf("|%.2%|"));
	printf("5\n");
	printf("r*%d*\n", printf("|%2.%|"));
	printf("r*%d*\n", ft_printf("|%2.%|"));
	printf("6\n");
	printf("r*%d*\n", printf("|%02.%|"));
	printf("r*%d*\n", ft_printf("|%02.%|"));
	printf("7\n");
	printf("r*%d*\n", printf("|%03.0%|"));
	printf("r*%d*\n", ft_printf("|%03.0%|"));
	printf("8\n");
	printf("r*%d*\n", printf("|%03.2%|"));
	printf("r*%d*\n", ft_printf("|%03.2%|"));
	printf("9\n");
	printf("r*%d*\n", printf("|%-2%|"));
	printf("r*%d*\n", ft_printf("|%-2%|"));
	printf("10\n");
	printf("r*%d*\n", printf("|%0-2%|"));
	printf("r*%d*\n", ft_printf("|%0-2%|"));
	printf("11\n");
	printf("r*%d*\n", printf("|%-2.%|"));
	printf("r*%d*\n", ft_printf("|%-2.%|"));
	printf("12\n");
	printf("r*%d*\n", printf("|%0-2.%|"));
	printf("r*%d*\n", ft_printf("|%0-2.%|"));
	printf("13\n");
	printf("r*%d*\n", printf("|%0-3.0%|"));
	printf("r*%d*\n", ft_printf("|%0-3.0%|"));
	printf("14\n");
	printf("r*%d*\n", printf("|%0-3.2%|"));
	printf("r*%d*\n", ft_printf("|%0-3.2%|"));
	printf("15\n");
	printf("r*%d*\n", printf("|%---10d|", 4200));
	printf("r*%d*\n", ft_printf("|%---10d|", 4200));
	printf("r*%d*\n", printf("%---24x", 12));
	printf("r*%d*\n", ft_printf("%---24x", 12));
	printf("19\n");
	printf("r*%d*\n", printf("%--24x", 12));
	printf("r*%d*\n", ft_printf("%--24x", 12));
	printf("r*%d*\n", printf("%.10x", 0x1234abcd));
	printf("r*%d*\n", ft_printf("%.10x", 0x1234abcd));
	printf("22\n");
	printf("r*%d*\n", printf("|%017%|"));
	printf("r*%d*\n", ft_printf("|%017%|"));
	printf("23\n");
	printf("r*%d*\n", printf("|%%%0004%|"));
	printf("r*%d*\n", ft_printf("|%%%0004%|"));
	printf("24\n");
	printf("r*%d*\n", printf("%%%004%"));
	printf("r*%d*\n", ft_printf("%%%004%"));

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

	printf("%d", ft_printf("*%d*\n", 0));
	printf("\n");
	printf("%d", printf("*%d*\n", 0));
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



	printf("%d", dprintf(1, "[%010.5d]", -42));
	printf("\n");
	printf("%d", ft_printf("[%010.5d]", -42));













}
