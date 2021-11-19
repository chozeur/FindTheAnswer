int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int 	t;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		t = s1[i] - s2[i];
		if (t != 0)
			return (t);
		i++;
	}
	return (t);
}
