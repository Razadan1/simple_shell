#include "shell.h"

/**
 * main - The Entry point for the shell project
 * Return: The return is 0 (void)
*/
int main(void)
{
	bool isPipe = false;
	ssize_t buff_len;

	while (true && !isPipe)
	{
		if (isatty(STDIN_FILENO) == 0)
			isPipe = true;
		else
			prompt();
		buff_len = _getline();
		if (buff_len == EOF)
		{
			isPipe = true;
			exit(EXIT_SUCCESS);
		}
	}
	return (0);
}
