#include "shell.h"

/**
 * _execute - it executes the commands from the
 * prompt
 * @commands: the arguements
*/

void _execute(char **commands)
{
	pid_t _id;
	int _status;

	_id = fork();

	if (_id == -1)
	{
		perror("nsh");
		free_buff(commands);
		return;
	}
	if (_id == 0)
	{
		int value = execve(commands[0], commands, environ);

		free_buff(commands);
		if (value == -1)
		{
			perror("Command not found\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			waitpid(_id, &_status, WUNTRACED);
		} while (!WIFEXITED(_status) && !WIFSIGNALED(_status));
		free_buff(commands);
	}
}
