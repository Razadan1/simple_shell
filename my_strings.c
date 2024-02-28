#include "shell.h"

/**
* str_len - returns the length of a string
* @str: string to be counted
*
* Return: returns length of string passed
*/
char str_len(char *str)
{
	int count = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}
	return (count);
}

/**
* str_cpy - copy src string into desty string
* @dest: destination string
* @src: source string
*
* Return: returns new string containing dest and src
*/
char *str_cpy(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}

/**
* str_cat - copy src string into desty string
* @dest: destination string
* @src: source string
*
* Return: returns new string
*/
char *str_cat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}


/**
* str_dup - dupicates string from array pointer
* @str: string to be duplicated
*
* Return: pointer to duplicate string
*/
char *str_dup(char *str)
{
	char *ptr;
	int i, len;

	if (s == NULL)
	return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; *s != '\0'; s++, i++)
	ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
 * _strcmp - compares two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: difference between ascii number
 */
int _strcmp(char *s1, char *s2)
{
	int length;

	for (length = 0; s1[length] != 0; length++)
	{
	if (s1[length] - s2[length] != 0)
	return (s1[length] - s2[length]);
	}

	return (0);
}
