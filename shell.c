#include "shell.h"

/**
 * main - executing a super simple shell
 *
 * Return: Always zero
 */
int main(void)
{
	int nwords = 0;
	char *in_str;
	char **arr, **argv;
	int status = 1;
	pid_t child_pid;

	while (status)
	{
		in_str = _readline();
		arr = str_split(in_str, &nwords);
		argv = (char **)malloc(sizeof(char *) * (nwords + 1));
		argv = arr;
		argv[nwords] = NULL;

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			if (strcmp(argv[0], "exit") == 0)
			{
				status = 0;
			}
			printf("Before execve\n");
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
			printf("After execve\n");
			sleep(3);
		}
	}
	free(arr);
	return (0);
}
