void	ft_bzero(void *s, size_t n)
{
	int	i;

	if (n == 0)
		return ;
	i = 0;
	while (s[i] && i  < n)
	{
		s[i] = '\0';
		i++;
	}
}
