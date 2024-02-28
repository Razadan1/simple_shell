#include "shell.h"

/**
 * free_buff - free the buffers
 * @buff: the buffers being freed
 * Return: returns nothing (void)
*/

void free_buff(char **buff)
{
	int  a = 0;

	if (!buff || buff == NULL)
		return;
	while (buff[a])
	{
		free(buff[a]);
		a++;
	}
	free(buff);
}
