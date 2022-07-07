#include "../include/philo.h"

// void	print_time(void);

int main()
{
	t_msts	ts1, ts2;

	ts1 = get_timestamp_ms();
	usleep(1000000);
	ts2 = get_timestamp_ms();
	printf("dif = %ld\n", timedif(ts1, ts2));
	return (0);
}

// void	print_time(void)
// {
// 	struct timeval	t1;

// 	gettimeofday(&t1, NULL);
// 	printf("time in usec = %ld\ttime in sec : %ld\n", t1.tv_usec, t1.tv_sec);
// }
