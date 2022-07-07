#include "../include/philo.h"

// void	print_time(void);

typedef struct s_datatest{
	char			*var;
	pthread_mutex_t	*mutex;
}	t_datatest;

void	*say_hey(void *data);

int main()
{
	pthread_mutex_t	*mutex = malloc(sizeof(pthread_mutex_t));

	t_datatest		*data1 = malloc(sizeof(t_datatest));
	t_datatest		*data2 = malloc(sizeof(t_datatest));
	t_datatest		*data3 = malloc(sizeof(t_datatest));

	data1->var = "first"; pthread_t	*t1 = malloc(sizeof(pthread_t));
	data2->var = "second"; pthread_t	*t2 = malloc(sizeof(pthread_t));
	data3->var = "third"; pthread_t	*t3 = malloc(sizeof(pthread_t));
	pthread_mutex_init(mutex, NULL);
	data1->mutex = mutex;
	data2->mutex = mutex;
	data3->mutex = mutex;


	pthread_create(t1, NULL, &say_hey, (void *)data1);
	// usleep(SEC);
	pthread_create(t2, NULL, &say_hey, (void *)data2);
	// usleep(SEC);
	pthread_create(t3, NULL, &say_hey, (void *)data3);
	// usleep(SEC);
	pthread_join(*t1, NULL);
	pthread_join(*t2, NULL);
	pthread_join(*t3, NULL);
	free(t1);
	free(t2);
	free(t3);
	pthread_mutex_destroy(mutex);
	return (0);
}

void	*say_hey(void *data)
{
	printf("%sHey, I'm %s !%s\n", RED, ((t_datatest *)data)->var, NC);
	pthread_mutex_lock(((t_datatest *)data)->mutex);
	printf("%sIm inside ! (%s)%s\n", YEL, ((t_datatest *)data)->var, NC);
	int	i = 0;
	while (i < 10)
	{
		usleep(1 * SEC);
		i++;
		printf("%s i = %d in %s %s\n", BLU, i, \
			((t_datatest *)data)->var, NC);
	}
	pthread_mutex_unlock(((t_datatest *)data)->mutex);
	printf("%s%s will go off in 3 sec\n%s", RED, ((t_datatest *)data)->var, NC);
	usleep(3 * SEC);
	return (NULL);
}
