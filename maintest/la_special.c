#include "../libftprintf.h"

int		main(void)
{
	char *str = "bonjour";

	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%*.c|", 40, 'f'));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%*.c|", 40, 'f'));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%*.p|", -40, str));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%*.p|", -40, str));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%*.p|", -40, (void *)-1));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%*.p|", -40, (void *)-1));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%*.d|", -40, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%*.d|", -40, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%*.*d|", -40, -12, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%*.*d|", -40, -12, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%0*.0d|", -40, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%0*.0d|", -40, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%0*.*d|", -20, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%0*.*d|", -20, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%-*.*d|", -20, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%-*.*d|", -20, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%0*.*d|", -200, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%0*.*d|", -200, -40, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%-*.*d|", -20, -400, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%-*.*d|", -20, -400, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%-*.*d|", -20, -400, 42));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%-*.*d|", -20, -400, 42));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%41.*d|", -9, 1));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%41.*d|", -9, 1));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%41.*s|", -9, str));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%41.*s|", -9, str));
	dprintf(1, "\n");
	dprintf(1, "\n");
	dprintf(1, "-%d-", dprintf(1, "expect|%-40.*x|", -9, 256));
	dprintf(1, "\n");
	dprintf(1, "-%d-", ft_printf("mine  |%-40.*x|", -9, 256));
	dprintf(1, "\n");
	dprintf(1, "\n");
}