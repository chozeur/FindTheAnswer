#include "../header/libft.h"

char	*ft_strdup(const char *s1)
{
	int	len;
	int	i;
	char	*res;

	len = ft_strlen(s1);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
