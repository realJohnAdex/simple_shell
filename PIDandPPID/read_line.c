#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#define RED "\033[0;31m"
#define RESET "\e[0m"

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
		fprintf(stderr, "%sdash: Allocation error%s\n", RED, RESET);
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
				fprintf(stderr, "dash: Allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
