#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int a;
	int b;
	int c = 0;


	a = printf("\n---------------\n%x\n%p\n%x\n%s\n%x\n%X\n%X\n\n", 132456, -1, 123456, "coucou", 123456, 123456, 123456);
	b = ft_printf("\n---------------\n%x\n%p\n%x\n%s\n%x\n%X\n%X\n\n", 123456, -1, 123456, "coucou",  123456, 123456, 123456);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);

		printf("r%d\n", printf("|%02.%|"));
	printf("r%d\n", ft_printf("|%02.%|"));
return (1);
}