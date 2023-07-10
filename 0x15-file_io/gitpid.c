#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();

	if (pid < 0)
	{
		fprintf(stderr, "fork failed!\n");
		return (1);
	}
	else if (pid == 0)
	{
		/* child process successfully created */
		printf("this is the child process id %u\n", getpid());
		printf("this is the child process id %u\n", getpid());
	}
	else
	{
		/*parent process*/
		printf("this is the parent process id %u\n", getpid());
		printf(" child process id %u\n", pid);
	}


	return (0);
}
