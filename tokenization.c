#include "shell.h"

/**
 * break_buff -  a double pointer function
 * it breaks  the buffer into words
 * and returns an array of strings
 * @buff: the arguement
 * Return: return a double pointer char toks
*/

char **break_buff(char *buff)
{
	int len = 0;
	char **toks = malloc(sizeof(char *) * strlen(buff));
	char *delims = "\r\n\t";
	char *tok = strtok(buff, delims);

	while (tok != NULL)
	{
		toks[len] = strcpy(tok, (char *)toks);
		++len;

		tok = strtok(NULL, delims);
	}

	toks[len] = NULL;
	free(toks);
	return (toks);
}
