#include "include/so_long.h"

int main(int ac, char **av)
{
	char **test;
	int	i;

	(void)ac;
	test = init_map(av[1]);
	if (test)
	{
		i = 0;
		while (test[i])
		{
			ft_printf("%s", test[i]);
			i++;
		}
		return (0);
	}
	return (1);
}
