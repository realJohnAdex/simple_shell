#include "shell.h"

char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

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

/**
 * _setenv - changes or adds an environment variable
 * @name: The name of the environmental variable to add or change.
 * @value: The value of the env variable
 * @overwrite: then its value is changed to value if
 * overwrite is nonzero; if overwrite is zero, then the
 * value of name is not changed
 *
 * Return: returns zero on success, or -1 on error.
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	unsigned int i, len;
	char *var;

	len = _strlen(name);	
	for (i = 0; environ[i] != NULL; i++)
		;
	if (var = _getenv(name))
	{
		if (!overwrite)
			return (0);
		//continue here, incomplete function
	}

}

int main(void)
{
	char *var = _getenv("HOME");
	printf("%s\n", var);
	return (0);
}
