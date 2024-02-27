#include "shell.h"

/**
 * my_prompt - The Entry point for the shell project
 * Return: The return is 0 (void)
*/
int my_prompt(void)
{
	char *buff;
	size_t buff_size = BUFFER_SIZE;
	ssize_t the_inputs;

	buff = (char *)malloc(sizeof(char) * buff_size);
	if (!buff)
	{
		perror("Unable to allocate buffer");
		exit(EXIT_FAILURE);
	}
	while (true)
	{
		write(STDOUT_FILENO, "$ ", 2);
		the_inputs = getline(&buff, &buff_size, stdin);
		if (isatty(STDIN_FILENO))
		{
			while (the_inputs != -1)
			{
				buff[strspn(buff, "\n")] = '\0';
				write(STDOUT_FILENO, "$ ", 2);
			}
		}
		else
			write(STDOUT_FILENO, "$ ", 2);
	}
	free(buff);
	return (0);
}
