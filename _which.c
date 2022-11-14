#include <dirent.h>
#include <stdio.h>
#include "shell.h"

/*
 * main - This program looks for the names of files in the current directory.
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i;
	DIR *d;
	struct dirent *dir;
	
	if (ac < 2)
	{
		printf("Usage: %s filename ...\n", av[0]);
		return (1);
	}
	d = opendir(".");
	if (d)
	{
		while ((dir = readdir(d)) != NULL) 
		{
			for (i = 1; i < ac; i++)
			{
				if (strcmp(dir->d_name, av[i]) == 0)
				{
					printf(" FOUND: %s\n", av[i]);
				}
			}
		}
		closedir(d);
	}
	return(0);
}
