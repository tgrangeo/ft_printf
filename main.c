#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int x = -42;
	int n = 42;
	char *s = "l'empereur grignoteur";
	char c = 98;
	unsigned int u = -842;
	int i = 42;

//TODO:conversion P
printf("conversion: %%p\n");
printf("|%12.10p|\n", &c);
ft_printf("|%.8p|\n\n", &c);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%.1u|\n", u);
ft_printf("|%.1u|\n\n", u);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%.30i|\n", i);
ft_printf("|%.30i|\n\n", i);

//TODO:conversion d
printf("conversion: %%d\n");
printf("|%15.10d|\n", n);
ft_printf("|%15.10d|\n\n", n);

//TODO:conversion s
printf("conversion: %%s\n");
printf("|%30.25s|\n", s);
ft_printf("|%30.25s|\n\n", s);

//TODO:conversion c
printf("conversion: %%c\n");
printf("|%10.20c|\n", c);
ft_printf("|%10.20c|\n\n", c);

//TODO:conversion x
printf("conversion: %%x\n");
printf("|%15.12x|\n", x);
ft_printf("|%15.12x|\n\n", x);

//TODO:conversion X
printf("conversion: %%X\n");
printf("|%.3X|\n", x);
ft_printf("|%.3X|\n\n", x);

//TODO:conversion %
printf("conversion: %%\n");
printf("|%12.0%|\n");
ft_printf("|%12.0%|\n\n");
return (1);
}
