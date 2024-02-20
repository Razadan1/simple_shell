#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints "$ ", get iput from the user and print the
 * input on the next line.
 *
 * Return: return 0
 */
int main(void)
{
	size_t n = 0;
	char *buff;

	buff = NULL;
	printf("$ ");
	getline(&buff, &n, stdin);
	printf("%s", buff);

	free(buff);

	return (0);
}
