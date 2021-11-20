#include "../header/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (b[i] && i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
