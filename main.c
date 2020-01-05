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
printf("conversion: %%p\n");
printf("|%p|\n", (void *)-1);
ft_printf("|%p|\n", (void *)-1);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%10.1u|\n", 9);
ft_printf("|%10.1u|\n", 9);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%.0i|\n", 2);
ft_printf("|%.0i|\n", 2);

//TODO:conversion d
printf("conversion: %%d\n");
printf("*%d*\n", printf("|%.0d|\n", 0));
printf("*%d*\n", ft_printf("|%.0d|\n", 0));

//TODO:conversion c
printf("conversion: %%c\n");
printf("*%d*\n", printf("|%c|\n", 0));
printf("*%d*\n", ft_printf("|%c|\n", 0));

//TODO:conversion s
printf("conversion: %%s\n");
printf("|%012.2s|\n", "c3hfdgjnhudgjsrmhfdi");
ft_printf("|%012.2s|\n", "c3hfdgjnhudgjsrmhfdi");

//TODO:conversion x
printf("conversion: %%x\n");
printf("*%d*\n", printf("|%15x|\n", x));
printf("*%d*\n", ft_printf("|%15x|\n", x));

//TODO:conversion X
printf("conversion: %%X\n");
printf("|%015X|\n", x);
ft_printf("|%015X|\n\n", x);

//TODO:conversion %
printf("conversion: %%%%%%%%%%%%%%\n");
printf("|%015%|\n");
ft_printf("|%015%|\n\n");
return (1);
}
