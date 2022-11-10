#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */
int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();
	printf("Process ID: %u\nParent Process ID: %u\n", my_pid, my_ppid);
	return (0);
}
