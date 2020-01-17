#include <stdio.h>
#include "ft_printf.h"

int main()
{
	dprintf(1, "-%d-", ft_printf("[%.0x]", -13));
	dprintf(1, "-%d-", printf("|%.0x|", -13));
	printf("\n");
	dprintf(1, "-%d-", ft_printf("[%.0x]", 12));
	dprintf(1, "-%d-", printf("|%.0x|", 12));
	printf("\n");
return (1);
}