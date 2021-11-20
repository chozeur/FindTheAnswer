#include "../header/libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void *restrict	res;
	int	i;

	res = dst;
	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (res);
}
