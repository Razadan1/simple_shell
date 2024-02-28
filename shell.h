#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#define BUFFER_SIZE 1024

extern char **environ;
void prompt(void);
ssize_t _getline(void);
void free_buff(char **buff);
void _execute(char **commands);
char **break_buff(char *buff);

#endif /* SHELL_H */
