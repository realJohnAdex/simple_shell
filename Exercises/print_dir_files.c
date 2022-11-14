#include <dirent.h>
#include <stdio.h>

/*
 * main - This program displays the names of all files in the current directory.
 *
 * Return: Always 0
 */
int main(void)
{
	DIR *d;
	struct dirent *dir;
	d = opendir(".");
	if (d) 
	{
		while ((dir = readdir(d)) != NULL)
		{
			if (dir->d_type == DT_REG)
				printf("%s\n", dir->d_name);
		}
		closedir(d);
	}
	return(0);
}
