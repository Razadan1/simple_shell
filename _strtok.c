#include <stdio.h>

/**
 * _strtok - my own string token function
 * @str: the string
 * @delim: the delimeter
 * Return: void
 */
void _strtok(const char *str, char delim)
{
	int lenght = strlen(str);
	char word[lenght + 1];
	int i, j;

	for (i = 0; i <= lenght; ++i)
	{
		j = 0;
		if (str[i] == delim || str[i] == '\0')
			word[j] == '\0';
		if (j > 0)
		{
			printf("%s\n", word);
			j = 0;
		}
		else
		word[j++] = str[i];
	}
}
