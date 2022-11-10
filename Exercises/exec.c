#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *envp[] = 
	{
		"HOME=/root",
		"PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin",
		"TZ=America/Los_Angeles",
		"HOSTNAME=b04aea8fec61",
		"LANG=en_US.UTF-8",
		NULL
	};

	printf("Before execve\n");
	if (execve(argv[0], argv, envp) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
