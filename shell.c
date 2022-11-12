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

	in_str = _readline();
	arr = str_split(in_str, &nwords);
	argv = (char **)malloc(sizeof(char *) * (nwords + 1));
	argv = arr;
	argv[nwords] = NULL;

	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	for (int i = 0; i < nwords; i++)
	{
		printf("word %d: %s\n", i, arr[i]);
	}
	free(arr);
	printf("%s", in_str);
	return (0);
}
