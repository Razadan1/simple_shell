#include "shell.h"

/**
 * prompt - prints  the shell's prompt to stdout
*/
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
