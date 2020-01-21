#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("|%s|", "");
	printf("\n");
	ft_printf("|%s|", "");

	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "\n");
	ft_printf("%.0x", -13);
	dprintf(1, "\n");
//	dprintf(1, "/%.0x/", -13);
	dprintf(1, "\n");
	ft_printf("%.0x", 12);
	dprintf(1, "\n");
//	dprintf(1, "/%.0x/", 12);
	dprintf(1, "\n");
	return (1);
}
