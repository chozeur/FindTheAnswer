void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
