#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

extern char **environ;

void prompt(void);
ssize_t _getline(void);
void free_buff(char **buff);
void _execute(char **commands);
char **break_buff(char *buff);
char str_len(char *str);
char *str_dup(char *str);
#endif /* SHELL_H */
