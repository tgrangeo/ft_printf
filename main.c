#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int a;
	int b;
	int c = 0;


	a = printf("\n---------------\n%p\n%x\n%x\n%X\n%X\n%x\n%X\n\n", "sucepute", 123, 456, 789, 123456, 123456, 69);
	b = ft_printf("\n---------------\n%p\n%x\n%x\n%X\n%X\n%x\n%X\n\n", "sucepute", 123, 456, 789, 123456, 123456, 69);
	if ((a) == (b))
		puts("OK\n");
	else
		puts("FAUX\n");
	printf("printf = %d, moi = %d\n", a, b);
return (1);
}