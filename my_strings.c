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

	while (*str != '\0')
	{
	count++;
	str++;
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
	char *main_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (main_dest);
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
	char *main_dest = dest;

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
	return (main_dest);
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

	if (str == NULL)
	return (NULL);

	len = str_len(str);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; *str != '\0'; str++, i++)
	ptr[i] = str[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
 * _strcmp - compares two strings
 *
 * @str1: char pointer
 * @str2: char pointer
 *
 * Return: difference between ascii number
 */
int _strcmp(char *str1, char *str2)
{
	int length;

	for (length = 0; str1[length] != 0; length++)
	{
	if (str1[length] - str2[length] != 0)
	return (str1[length] - str2[length]);
	}

	return (0);
}
