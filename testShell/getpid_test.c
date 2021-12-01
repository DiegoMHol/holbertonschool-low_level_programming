#include <stdio.h>
#include <unistd.h>
/**
*
*
*
*/
int main(void)
{
	int pid_t = getpid();
	int ppid_t = getppid();

	printf("The process id is %d\n", pid_t);
	printf("The parent process id is %d\n", ppid_t);
	return (0);
}
