#include "shell.h"

/**
 * main - executing a super simple shell
 *
 * Return: Always zero
 */
int main(void)
{
	char *in_str;

	in_str = _readline();
	printf("%s", in_str);
	return (0);
}
