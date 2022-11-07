#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char str[] = "breaking up strings using strtok";

	char* ptr = strtok(str, " ");

	while (ptr !=NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
	
	return (0);
}
