#include <stdio.h>
#include <string.h>
/**
 * main - tokenizes strings
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	char *parse_str;

	str = strdup("I want this string tokenized");
	parse_str = strtok(str, " ");

	while (parse_str != NULL)
	{
		printf("%s\n", parse_str);
		parse_str = strtok(NULL, " ");
	}
	return (0);
}
