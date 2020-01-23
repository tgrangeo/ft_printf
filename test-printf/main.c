#include <stdio.h>
#include "../ft_printf.h"

int main(void)
{
	printf("r%d\n", printf("|%2%|"));
	printf("r%d\n", ft_printf("|%2%|"));
	printf("2\n");
	printf("r%d\n", printf("|%02%|"));
	printf("r%d\n", ft_printf("|%02%|"));
	printf("3\n");
	printf("r%d\n", printf("|%.02%|"));
	printf("r%d\n", ft_printf("|%.02%|"));
	printf("4\n");
	printf("r%d\n", printf("|%.2%|"));
	printf("r%d\n", ft_printf("|%.2%|"));
	printf("5\n");
	printf("r%d\n", printf("|%2.%|"));
	printf("r%d\n", ft_printf("|%2.%|"));
	printf("6\n");
	printf("r%d\n", printf("|%02.%|"));
	printf("r%d\n", ft_printf("|%02.%|"));
	printf("7\n");
	printf("r%d\n", printf("|%03.0%|"));
	printf("r%d\n", ft_printf("|%03.0%|"));
	printf("8\n");
	printf("r%d\n", printf("|%03.2%|"));
	printf("r%d\n", ft_printf("|%03.2%|"));
	printf("9\n");
	printf("r%d\n", printf("|%-2%|"));
	printf("r%d\n", ft_printf("|%-2%|"));
	printf("10\n");
	printf("r%d\n", printf("|%0-2%|"));
	printf("r%d\n", ft_printf("|%0-2%|"));
	printf("11\n");
	printf("r%d\n", printf("|%-2.%|"));
	printf("r%d\n", ft_printf("|%-2.%|"));
	printf("12\n");
	printf("r%d\n", printf("|%0-2.%|"));
	printf("r%d\n", ft_printf("|%0-2.%|"));
	printf("13\n");
	printf("r%d\n", printf("|%0-3.0%|"));
	printf("r%d\n", ft_printf("|%0-3.0%|"));
	printf("14\n");
	printf("r%d\n", printf("|%0-3.2%|"));
	printf("r%d\n", ft_printf("|%0-3.2%|"));
	printf("15\n");
	printf("r%d\n", printf("|%---10d|", 4200));
	printf("r%d\n", ft_printf("|%---10d|", 4200));
	printf("r%d\n", printf("%---24x", 12));
	printf("r%d\n", ft_printf("%---24x", 12));
	printf("19\n");
	printf("r%d\n", printf("%--24x", 12));
	printf("r%d\n", ft_printf("%--24x", 12));
	printf("r%d\n", printf("%.10x", 0x1234abcd));
	printf("r%d\n", ft_printf("%.10x", 0x1234abcd));
	printf("22\n");
	printf("r%d\n", printf("|%017%|"));
	printf("r%d\n", ft_printf("|%017%|"));
	printf("23\n");
	printf("r%d\n", printf("|%%%0004%|"));
	printf("r%d\n", ft_printf("|%%%0004%|"));
	printf("24\n");
	printf("r%d\n", printf("%%%004%"));
	printf("r%d\n", ft_printf("%%%004%"));
	return (0);
}
