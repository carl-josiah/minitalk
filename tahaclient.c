#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void	handler(int num)
{
	if (num == SIGUSR1)
		c += 1;
	else
		num += 0;

}


int	main(int ac, char **av)
{
	printf("%d\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
	{
		
	}
}