#include "shell.h"


/**
 * read_line - to read a line of user command
 *
 * Return: Always zero
 */
char *read_line()
{
	int buffsize = 1024;
	int position = 0;
	char * buffer = malloc(sizeof(char) * buffsize);
	int c;

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Allocation error\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			//printf("\n");
			buffer[position] = '\0';
			return buffer;
		} else
		{
			buffer[position] = c;
		}
		position++;

		if (position >= buffsize)
		{
			buffsize += 1024;
			buffer = realloc(buffer, buffsize);

			if (!buffer)
			{
				dprintf(STDERR_FILENO, "Allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
