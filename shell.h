#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#define TOK_DELIM " \t\r\n"

char *_readline();
char **str_split(char *str, int *number_of_words);

char *read_line();
char **split_line(char *line);
int get_input(char *str);

#endif /* SHELL_H */
