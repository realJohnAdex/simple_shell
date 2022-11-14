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

/* STRING FUNCTIONS */
int _strlen(const char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);

#endif /* SHELL_H */
