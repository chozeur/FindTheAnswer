#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*line;
	int	fd;
	int	i;
	line = "ok";

	i = 0;
	(void)ac;	
	fd = open(av[1], O_RDONLY);
	while (i++ < 11)
	{	
		line = get_next_line(fd);
		printf("%s", line);
	}
	return (0);
}
