#include <stdio.h>

/**
 * main - prints the environment using the global variable environ
 *
 * Return: Always 0.
 */
int main()
{
	unsigned int i;
	extern char **environ;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
