#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - prints "$ ", get iput from the user and print the
 * input on the next line.
 *
 * Return: return 0
 */
int main(void)
{
	ssize_t m;
	size_t n = 0;
	char *buff;

	buff = NULL;
	/*Buff is the buffer, it is where the arguements are kept*/
	while (true)
	{
		printf("$ ");
		m = getline(&buff, &n, stdin);
		printf("%s", buff);
		printf("%ld\n", m);
		if (&buff == "exit")
			break;
	}
	free(buff);

	return (0);
}
