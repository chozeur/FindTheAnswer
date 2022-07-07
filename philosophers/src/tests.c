#include "../include/philo.h"

// void	print_time(void);

void	*say_hey(void *var);

int main()
{
	char	*var1 = "first"; pthread_t	*t1 = malloc(sizeof(pthread_t));
	char	*var2 = "second"; pthread_t	*t2 = malloc(sizeof(pthread_t));
	char	*var3 = "third"; pthread_t	*t3 = malloc(sizeof(pthread_t));

	pthread_create(t1, NULL, &say_hey, (void *)var1);
	usleep(SEC);
	pthread_create(t2, NULL, &say_hey, (void *)var2);
	usleep(SEC);
	pthread_create(t3, NULL, &say_hey, (void *)var3);
	usleep(SEC);
	pthread_join(*t1, NULL);
	pthread_join(*t2, NULL);
	pthread_join(*t3, NULL);
	free(t1);
	free(t2);
	free(t3);
	return (0);
}

void	*say_hey(void *var)
{
	while (1)
	{
		printf("Hey, I'm %s !\n\n", (char *)var);
		usleep(3 * SEC);
	}
	return (NULL);
}
