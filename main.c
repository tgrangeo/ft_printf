#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x = 26000000;
	int n = 22;
	char *s = "l'empereur grignoteur";
	char c = 98;
	unsigned int u = -42;
	int i = 0x26;

//TODO:conversion P
printf("conversion: %%p\n");
printf("|%-0300.60p|\n", &c);
ft_printf("|%-030.6p|\n\n", &c);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%30u|\n", u);
ft_printf("|%30u|\n\n", u);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%30i|\n", i);
ft_printf("|%30i|\n\n", i);

//TODO:conversion d
printf("conversion: %%d\n");
printf("|%30d|\n", n);
ft_printf("|%-30.5d|\n\n", n);

/*//TODO:conversion s
printf("conversion: %%s\n");
printf("|%30s|\n", s);
ft_printf("|%30s|\n\n", s);

//TODO:conversion c
printf("conversion: %%c\n");
printf("|%30c|\n", c);
ft_printf("|%30c|\n\n", 'b');

//TODO:conversion x
printf("conversion: %%x\n");
printf("|%30x|\n", x);
ft_printf("|%30x|\n\n", x);

//TODO:conversion X
printf("conversion: %%X\n");
printf("|%30X|\n", x);
ft_printf("|%30X|\n\n", x);

//TODO:conversion %
printf("conversion: %%\n");
printf("|%-030.6%|\n");
ft_printf("|%-030.6%|\n\n");*/
return (1);
}
