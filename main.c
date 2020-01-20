#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("%d", printf("[%.p]", "bonjour"));
	printf("\n");
	printf("%d", ft_printf("[%.p]", "bonjour"));
	printf("\n");
	printf("%d", printf("[%.p]", 54615146));
	printf("\n");
	printf("%d", ft_printf("[%.p]", 54615146));
	printf("\n");
	printf("%d", printf("[%.p]", (void *)256));
	printf("\n");
	printf("%d", ft_printf("[%.p]", (void *)256));
	printf("\n");
	printf("%d", dprintf(1, "[%p]", 4294967296));
	printf("\n");
	printf("%d", ft_printf("[%p]", 4294967296));
return (1);
}