#include "shell.h"

/**
 * _getline - get the characters from the prompt
 * using the getline function.
 * Return: return the buff_len (buffer length)
*/

ssize_t _getline(void)
{
	char *buff =  NULL;
	size_t buff_size = 0;
	char **commands;
	ssize_t buff_len;

	while (true)
	{
		buff_len = getline(&buff, &buff_size, stdin);
		if (buff_len == EOF)
		{
			free(buff);
			return (buff_len);
		}
		if (buff_len == -1)
		{
			perror("Error in input");
			free(buff);
			break;
		}
		if (buff[buff_len - 1] == '\n')
		{
			buff[buff_len - 1] = '\0';
		}
		if (strlen(buff) == 0)
		{
			free(buff);
			break;
		}

		commands = break_buff(buff);
		free(buff);
		_execute(commands);
		buff_size = 0;
		if (isatty(STDIN_FILENO) == 0)
			break;
	}
	return (buff_len);
}
