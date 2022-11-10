#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * main - Entry point, print all arg of vfunc without using ac
 *
 * Return: Always zero
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
