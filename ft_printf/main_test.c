#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	int	i;

	// TEST %c //
//	ft_printf("%d\n", ft_printf("4 : %c\t", '4'));

	// TEST %s //
//	ft_printf("%d\n", ft_printf("123 : %s\t", "123"));
	
	// TEST %p //
//	ft_printf("%d\n", ft_printf("0x... : %p\t", &i));
//	ft_putchar('\n');
//	printf("%d\n", printf("0x... : %p\t", NULL));
	
	// TEST %d //
//	ft_printf("%d\n", ft_printf("-1 : %d\t", -1));
	// TEST %i //
//	ft_printf("%d\n", ft_printf("-42 : %i\t", -42));
	
	// TEST %u //
	ft_printf("%d\n", ft_printf("101 : %u\t", 101));
	printf("%d\n", printf("101 : %u\t", 101));
	
	ft_printf("%d\n", ft_printf("-42 : %u\t", -42));
	printf("%d\n", printf("-42 : %u\t", -42));

	ft_printf("%d\n", ft_printf("INT_MIN : %u\t", INT_MIN));
	printf("%d\n", printf("INT_MIN : %u\t", INT_MIN));

	ft_printf("%d\n", ft_printf("LONG_MAX : %u\t", LONG_MAX));
	printf("%d\n", printf("LONG_MAX : %u\t", LONG_MAX));

	ft_printf("%d\n", ft_printf("UINT_MAX : %u\t", UINT_MAX));
	printf("%d\n", printf("UINT_MAX : %u\t", UINT_MAX));

	ft_printf("%d\n", ft_printf("ULONG_MAX : %u\t", ULONG_MAX));
	printf("%d\n", printf("ULONG_MAX : %u\t", ULONG_MAX));

	// TEST %x //
//	ft_printf("%d\n", ft_printf("2a : %x\t", 42));
	
	// TEST %X //
//	ft_printf("%d\n", ft_printf("2A : %X\t", 42));
	
	// TEST %% //
//	ft_printf("%d\n", ft_printf("percent : %%\t"));

	return (0);
}
