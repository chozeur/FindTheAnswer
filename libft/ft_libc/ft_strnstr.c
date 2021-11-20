#include "../header/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] && j < len)
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (j == len)
				return (&haystack[i]);
		}
		i++;
	}
}
