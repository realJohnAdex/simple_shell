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

	while (status)
	{
<<<<<<< HEAD
		printf("word %d: %s\n", i, arr[i]);
=======
		in_str = _readline();
		arr = str_split(in_str, &nwords);
		argv = (char **)malloc(sizeof(char *) * (nwords + 1));
		argv = arr;
		argv[nwords] = NULL;

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
>>>>>>> 1f6e46f49373ce6c0bf01ce9b18e04ed710aea93
	}
	
	free(arr);
	return (0);
}
