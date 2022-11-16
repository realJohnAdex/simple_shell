#include "shell.h"


/**
 * split_line - to split line of user command
 *
 * Return: Always zero
 */
char **split_line(char *line)
{
	int buffsize = 1024;
	int position = 0;
	char **tokens = malloc(sizeof(char *) * buffsize);
	char *token;

	if (!tokens)
	{
		dprintf(STDERR_FILENO, "Allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;

		if (position >= buffsize)
		{
			buffsize += 1024;
			tokens = realloc(tokens, buffsize * sizeof(char *));

			if (!tokens)
			{
				dprintf(STDERR_FILENO, "Allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;

	return tokens;
}
