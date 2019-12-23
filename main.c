#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x = -42;
	int n = -42;
	char *s = "l'empereur grignoteur";
	char c = 98;
	unsigned int u = 842;
	int i = -42;

//TODO:conversion P
printf("conversion: %%p\n");
printf("|%0p|\n", &c);
ft_printf("|%0p|\n\n", &c);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%015.10u|\n", u);
ft_printf("|%015.10u|\n\n", u);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%015.10i|\n", i);
ft_printf("|%015.10i|\n\n", i);

//TODO:conversion d
printf("conversion: %%d\n");
printf("/pp %.50d/\n", 10000);
ft_printf("/pp %.50d/\n\n", 10000);

//TODO:conversion s
printf("conversion: %%s\n");
printf("p3 %.4s\n", NULL);
ft_printf("p3 %.4s\n\n", NULL);

//TODO:conversion c
printf("conversion: %%c\n");
printf("p2 -%.10s-\n", "cccc");
ft_printf("p2 -%.10s-\n\n", "cccc");

//TODO:conversion x
printf("conversion: %%x\n");
printf("|%015x|\n", x);
ft_printf("|%015x|\n\n", x);

//TODO:conversion X
printf("conversion: %%X\n");
printf("|%015X|\n", x);
ft_printf("|%015X|\n\n", x);

//TODO:conversion %
printf("conversion: %%\n");
printf("|%015%|\n");
ft_printf("|%015%|\n\n");
return (1);
}
