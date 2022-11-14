#include <stdio.h>
#include "shell.h"


extern char **environ;

/**
 * _getenv - get an environment variable
 * @name: The name of the environmental variable to get.
 *
 * Return: If the environmental variable does not exist - NULL.
 *         Otherwise - a pointer to the environmental variable.
 */
char *_getenv(const char *name)
{
	unsigned int i, len;

	i = 0;
	len = _strlen(name);
	while (environ[i] != NULL)
	{
		if (_strncmp(name, environ[i], len) == 0)
			return (environ[i]);
		i++;
	}

	return (NULL);
}

int main(void)
{
	char *var = _getenv("HOME");
	printf("%s\n", var);
	return (0);
}
