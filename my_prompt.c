#include "shell.h"

/**
 * main - The Entry point for the shell project
 * Return: The return is 0 (void)
*/
int main(void)
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
		prompt();
		the_inputs = getline(&buff, &buff_size, stdin);
		if (the_inputs == -1)
		{
			if (feof(stdin))
			{
				write(STDOUT_FILENO, "\n", 1);
				free(buff);
				return (0);
			}
			perror("Error reading line");
			exit(EXIT_FAILURE);
		}
		buff[strcspn(buff, "\n")] = '\0';
	}
	free(buff);
	return (0);
}
