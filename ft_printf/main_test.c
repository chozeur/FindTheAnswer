#include "includes/ft_printf.h"
#include <stdio.h>

int	main()
{
	int	i;

	// TEST %c //
	ft_printf("%d\n", ft_printf("4 : %c\t", '4'));
	// TEST %s //
	ft_printf("%d\n", ft_printf("123 : %s\t", "123"));
	// TEST %p //
	ft_printf("%d\n", ft_printf("0x... : %p\t", &i));
	// TEST %d //
	ft_printf("%d\n", ft_printf("42 : %d\t", 42));
	// TEST %i //
	ft_printf("%d\n", ft_printf("-42 : %i\t", -42));
	// TEST %u //
	ft_printf("%d\n", ft_printf("42 : %u\t", 42));
	// TEST %x //
	ft_printf("%d\n", ft_printf("2a : %x\t", 42));
	// TEST %X //
	ft_printf("%d\n", ft_printf("2A : %X\t", 42));
	// TEST %% //
	ft_printf("%d\n", ft_printf("percent : %%\t"));
}
