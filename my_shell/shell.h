#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

#define TOK_DELIM " \t\r\n"

int lsh_execute(char **args);
char **str_split(char *str, int *number_of_words);
char *_readline();
char **split_line(char *line);
int get_input(char *str);

/*
 * builtin commands
 */
int cd(char **args);
int exit(char **args);

/*
 * array of builtin commands for easy updating of commands in future.
 */
char *built_in[] = {
	"cd",
	"exit"
};

/*
 * builtin function declaration
 */
int (*builtinf[]) (char **) = {
	&cd,
	&exit
};

/*
 * memory allocation for builtin
 */
int lsh_builtin_mem(){
	return (sizeof(built_in) /sizeof(char *));
};

/*
 * implementation of builtin
 */
int cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
	}
	else
	{
		if (args[1] != "/0")
		{
			perror("lsh");
		}
	}
	return 1;
}

int exit(char **args)
{
	return (0);
}

#endif /* SHELL_H*/
