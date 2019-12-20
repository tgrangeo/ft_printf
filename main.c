#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x = -42;
	int n = -42;
	char *s = "l'empereur grignoteur";
	char c = 98;
	unsigned int u = -842;
	int i = 42;

//TODO:conversion P
printf("conversion: %%p\n");
printf("|%-50p|\n", &c);
ft_printf("|%-50p|\n\n", &c);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%-50.30u|\n", u);
ft_printf("|%-50.30u|\n\n", u);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%-50.30i|\n", i);
ft_printf("|%-50.30i|\n\n", i);

//TODO:conversion d
printf("conversion: %%d\n");
printf("|%-50.30d|\n", n);
ft_printf("|%-50.30d|\n\n", n);

//TODO:conversion s
printf("conversion: %%s\n");
printf("|%-50.3s|\n", s);
ft_printf("|%-50.3s|\n\n", s);

//TODO:conversion c
printf("conversion: %%c\n");
printf("|%-50c|\n", c);
ft_printf("|%-50c|\n\n", c);

//TODO:conversion x
printf("conversion: %%x\n");
printf("|%-50.30x|\n", x);
ft_printf("|%-50.30x|\n\n", x);

//TODO:conversion X
printf("conversion: %%X\n");
printf("|%-50.30X|\n", x);
ft_printf("|%-50.30X|\n\n", x);

//TODO:conversion %
printf("conversion: %%\n");
printf("|%-50.30%|\n");
ft_printf("|%-50.30%|\n\n");
return (1);
}
