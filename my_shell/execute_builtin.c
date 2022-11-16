#include "shell.h"

/**
 * exit_func - exits the shell
 * @info: Structure contaiing builtin function
 *
 *  Return: exits with (0) or "exit"
 */
int exit_func((info_t *info)
{
	int _exit;

	if (info -> argv[1])/* if exit function exist */
	{

	_exit = erratoi(info->argv[1]);
	if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputchar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}

/**
 * cd_func -  hanges current directory
 * @info: structure containing builtin definition
 *
 *
 * Return: Always 0.
 */
int cd_func(info_t *info)
{
	char *s, *dir, buf[1024];
	int chdir_ret;

	s = getcwd(buf, 1024);
	if (!s)
		_puts("TODO: >>getcwd failure emsg here<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = /* TODO: what should this be? */
				chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _eputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buf, 1024));
	}
	return (0);
}

/**
 * help_func - builtin help function
 * @info: structure of builtin
 *
 * Return: Always o
 */
int help_func(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;
	_puts("Function not available\n");
	if (0)
		_puts(*arg_array); 
	return (0);
}
