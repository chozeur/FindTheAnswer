#include "../header/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	t;

	i = 0;
	t = -1;
	while (s[i])
	{
		if (s[i] == c)
			t = i;
		i++;
	}
	if (s[i] == c)
		t = i;
	if (t != -1)
		return (&s[t]);
	return (NULL);
}
