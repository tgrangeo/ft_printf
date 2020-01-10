#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x = -42;
	int n = -42;
	char *s = "l'empereur grignoteur";
	char c = 98;
	unsigned int u = 842;
	int i = 0;

//TODO:conversion P
printf("-----conversion-----: %%p\n");
dprintf(1, "%d\n", printf("|%0.0p|\n", 0));
ft_printf("|%0.0p|\n", 0);

//TODO:conversion u
printf("-----conversion-----: %%u\n");
dprintf(1, "%d\n", printf("|%0.0u|\n", 0));
ft_printf("|%0.0u|\n", 0);

//TODO:conversion i
printf("-----conversion-----: %%i\n");
dprintf(1, "%d\n", printf("|%1.10i|\n", -987654321));
ft_printf("|%1.10i|\n", -987321654);

//TODO:conversion d
printf("-----conversion-----: %%d\n");
dprintf(1, "%d\n", printf("|%0.*d|\n", 10, -987654321));
ft_printf("|%0.*d|\n", 10, -987321654);

//TODO:conversion c
printf("-----conversion-----: %%c\n");
dprintf(1, "%d\n", printf("|%0.0c|\n", 0));
ft_printf("|%0.0c|\n", 0);

//TODO:conversion s
printf("-----conversion-----: %%s\n");
dprintf(1, "%d\n", printf("|%0.0s|\n", 0));
ft_printf("|%0.0s|\n", 0);

//TODO:conversion x
printf("-----conversion-----: %%x\n");
dprintf(1, "%d\n", printf("|%0.0x|\n", 0));
ft_printf("|%0.0x|\n", 0);

//TODO:conversion X
 printf("-----conversion-----: %%X\n");
dprintf(1, "%d\n",printf("|%0.0X|\n", 0));
ft_printf("|%0.0X|\n", 0);

//TODO:conversion %
 printf("-----conversion-----: %%\n");
dprintf(1, "%d\n", printf("|%0.0%|\n"));
ft_printf("|%0.0%|\n");
return (1);
}