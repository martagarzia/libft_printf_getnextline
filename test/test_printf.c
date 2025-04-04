#include "libft.h"

int	main(void)
{
	ft_printf("CHAR: %c\n", 'A');
	ft_printf("STRING: %s\n", "Hello, world!");
	ft_printf("POINTER: %p\n", (void *)0x1234abcd);
	ft_printf("DECIMAL: %d\n", -42);
	ft_printf("INTEGER: %i\n", 42);
	ft_printf("UNSIGNED: %u\n", 3000000000u);
	ft_printf("HEX lowercase: %x\n", 48879);
	ft_printf("HEX uppercase: %X\n", 48879);
	ft_printf("PERCENT: %%\n");

	return (0);
}
