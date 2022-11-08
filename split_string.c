#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **str_split(char *str, int *number_of_words);

/**
 * main- Entry point
 * 
 * Return: always zero
 */
int main ()
{
	int nwords = 0;
	char str[] = "Hello World";

	char **arr = str_split(str, &nwords);

	for (int i = 0; i < nwords; i++)
	{
		printf ("word %d: %s\n", i, arr[i]);
	}
	free(arr);
	// Needs to free allocated memory...
	return (0);
}

/**
 * str_split - Splits a string
 * @str: The string that will be splited
 * 
 * Return: On success, it returns the new array
 * of strings. On failure, it returns NULL
 */
char **str_split(char *str, int *number_of_words)
{
	char *piece, **str_arr = NULL, *str_cpy = NULL;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	str_cpy = strdup (str);
	piece = strtok(str_cpy, " ");
	while (piece != NULL)
	{
		if ((*piece) == '\n')
		{
			piece = strtok(NULL, " ");
			continue;
		}
		(*number_of_words)++;
		piece = strtok(NULL, " ");
	}

	str_arr = (char **)malloc(sizeof(char *) * (*number_of_words));
	piece = strtok(str, " ");
	for (i = 0; piece != NULL; i++)
	{
		if ((*piece) == '\n')
		{
			piece = strtok(NULL, " ");
			continue;
		}
		str_arr[i] = (char *)malloc(sizeof(char) * (strlen(piece) + 1));
		strcpy(str_arr[i], piece);
		piece = strtok(NULL, " ");
	}

	if (str_cpy)
		free (str_cpy);

	return (str_arr);
}
