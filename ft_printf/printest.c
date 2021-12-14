#include <stdio.h>
#include <limits.h>

int main()
{
	printf("-42 : %x\n", -42);
	printf("INT_MAX : %x\n", INT_MAX);
	printf("INT_MIN : %x\n", INT_MIN);
	printf("LONG_MAX : %x\n", LONG_MAX);
	printf("LONG_MIN + 1 : %x\n", LONG_MIN + 1);
	printf("UINT_MAX : %x\n", UINT_MAX);
	printf("ULONG_MAX : %x\n", ULONG_MAX);
	return (0);
}
