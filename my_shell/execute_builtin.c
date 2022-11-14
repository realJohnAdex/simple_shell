#include <stdio.h>
#include <strings.h>
#include "shell.h"

/**
 * lsh_execute - runs builtin command when called
 * @args: parameter passed into function lsh_execute
 *
 * Return: launches the builtin
 */
int lsh_execute(char **args)
{
	int i;

	if (args[0 == NULL])
	{
		return (1);
	}

	for (i = 0; i < lsh_builtin_mem(); i++)
	{
		if (strcmp(args[0], lsh_built_in[i]) == 0)
		{
			return (*builtinf[i](args));
		}
	}
	return (lsh_launch(args));
}
