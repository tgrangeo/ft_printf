#include <stdio.h>
#include "../libftprintf.h"

int main(void)
{
	printf("r%d\n", printf("|%2%|"));
	printf("r%d\n", ft_printf("|%2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%02%|"));
	printf("r%d\n", ft_printf("|%02%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%.02%|"));
	printf("r%d\n", ft_printf("|%.02%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%.2%|"));
	printf("r%d\n", ft_printf("|%.2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%2.%|"));
	printf("r%d\n", ft_printf("|%2.%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%02.%|"));
	printf("r%d\n", ft_printf("|%02.%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%03.0%|"));
	printf("r%d\n", ft_printf("|%03.0%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%03.2%|"));
	printf("r%d\n", ft_printf("|%03.2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%-2%|"));
	printf("r%d\n", ft_printf("|%-2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%0-2%|"));
	printf("r%d\n", ft_printf("|%0-2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%-2.%|"));
	printf("r%d\n", ft_printf("|%-2.%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%0-2.%|"));
	printf("r%d\n", ft_printf("|%0-2.%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%0-3.0%|"));
	printf("r%d\n", ft_printf("|%0-3.0%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%0-3.2%|"));
	printf("r%d\n", ft_printf("|%0-3.2%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%---10d|", 4200));
	printf("r%d\n", ft_printf("|%---10d|", 4200));
	printf("\n----\n");
	printf("r%d\n", printf("%---24x", 12));
	printf("r%d\n", ft_printf("%---24x", 12));
	printf("\n----\n");
	printf("r%d\n", printf("%--24x", 12));
	printf("r%d\n", ft_printf("%--24x", 12));
	printf("\n----\n");
	printf("r%d\n", printf("%.10x", 0x1234abcd));
	printf("r%d\n", ft_printf("%.10x", 0x1234abcd));
	printf("\n----\n");
	printf("r%d\n", printf("|%017%|"));
	printf("r%d\n", ft_printf("|%017%|"));
	printf("\n----\n");
	printf("r%d\n", printf("|%%%0004%|"));
	printf("r%d\n", ft_printf("|%%%0004%|"));
	printf("\n----\n");
	printf("r%d\n", printf("%%%004%"));
	printf("r%d\n", ft_printf("%%%004%"));
	return (0);
}
