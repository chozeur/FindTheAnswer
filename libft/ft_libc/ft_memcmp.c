int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	int	t;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		t = s1[i] - s2[i];
		if (t != 0)
			return (t);
		i++;
	}
	return (t);
}
