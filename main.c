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
dprintf(1, "%d\n", printf("|%.p|\n", 0));
ft_printf("|%.p|\n", 0);

//TODO:conversion u
printf("-----conversion-----: %%u\n");
dprintf(1, "%d\n", printf("|%.u|\n", 9));
ft_printf("|%.u|\n", 9);

//TODO:conversion i
printf("-----conversion-----: %%i\n");
dprintf(1, "%d\n", printf("|%.0i|\n", 0));
ft_printf("|%.0i|\n", 0);

//TODO:conversion d
printf("-----conversion-----: %%d\n");
dprintf(1, "%d\n", printf("|%.0d|\n", 0));
ft_printf("|%.0d|\n", 0);

//TODO:conversion c
printf("-----conversion-----: %%c\n");
dprintf(1, "%d\n", printf("|%c|\n", 0));
ft_printf("|%c|\n", 0);

//TODO:conversion s
printf("-----conversion-----: %%s\n");
dprintf(1, "%d\n", printf("|%.0s|\n", ""));
ft_printf("|%.0s|\n", "");

//TODO:conversion x
printf("-----conversion-----: %%x\n");
dprintf(1, "%d\n", printf("|%15x|\n", x));
ft_printf("|%15x|\n", x);

//TODO:conversion X
 printf("-----conversion-----: %%X\n");
dprintf(1, "%d\n",printf("|%015X|\n", x));
ft_printf("|%015X|\n", x);

//TODO:conversion %
 printf("-----conversion-----: %%\n");
dprintf(1, "%d\n", printf("|%015%|\n"));
ft_printf("|%015%|\n");
return (1);
}