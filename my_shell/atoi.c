#include <shell.h>
/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 *
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * isalpha - checks alphabet characters
 * @c: input parameter
 * 
 * Return:1 if alphabet else 0
 */
int __isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
		else
			return (0);
	}
}

/**
 * is_atoi - converts strings to integers
 * @s: string converted
 *
 * Return: 1 or 0
 */
int is_atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsgned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign 
				+= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else
		{
			if(flag == 1)
				flag = 2;
		}
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
