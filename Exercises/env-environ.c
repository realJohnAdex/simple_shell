#include <stdio.h>

/**
 * main - prints the address of env and environ
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	printf("Env address: %p\n", *env);
	printf("Environ address: %p\n", *environ);
	if (*env == *environ)
		printf("Same Address for env and environ\n");
	return (0);
}
