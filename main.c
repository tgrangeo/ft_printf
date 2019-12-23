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
printf("|%p|\n", (void *)-1);
ft_printf("|%p|\n", (void *)-1);

//TODO:conversion u
printf("conversion: %%u\n");
printf("|%015.10u|\n", u);
ft_printf("|%015.10u|\n\n", u);

//TODO:conversion i
printf("conversion: %%i\n");
printf("|%.i|\n", 0);
ft_printf("|%.i|\n", 0);

//TODO:conversion d
printf("conversion: %%d\n");
printf("|%.d|\n", 0);
ft_printf("|%.d|\n\n", 0);

//TODO:conversion s
printf("conversion: %%cc\n");
printf("*%d*\n", printf("%c", 0));
printf("*%d*\n", ft_printf("|%c*8%c|\n", 'c', 'c'));

//TODO:conversion c
printf("conversion: %%c\n");
printf("|%c%c%c|\n", 'c', 0, 'c');
ft_printf("|%c%c%c|\n", 'c', 0, 'c');

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
