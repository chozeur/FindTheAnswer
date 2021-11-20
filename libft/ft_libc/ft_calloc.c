#include "../header/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	int	i;

	res = malloc(count * size);
	i = 0;
	while (i < count)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
