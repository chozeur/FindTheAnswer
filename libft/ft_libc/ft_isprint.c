#include "../header/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 176)
		return (1);
	return (0);
}
