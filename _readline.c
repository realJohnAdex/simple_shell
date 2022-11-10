#include "shell.h"

/**
 * _readline - prints "$ ", wait for the user input, prints it on the next line
 *
 * Return: string input
 */

char *_readline()
{
	int bytes_read;
	size_t size = 1024;
	char *string;

	printf ("$ ");
	/* These 2 lines are very important. */
	string = (char *) malloc (size);
	bytes_read = getline(&string, &size, stdin);

	if (bytes_read == -1)
	{
		printf("ERROR!");
		return(NULL);
	}

	return (string);
}
