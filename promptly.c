#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
	printf("$ ");
	m = getline(&buff, &n, stdin);
	printf("%s", buff);
	printf("n size: %ld\n", n);
	char delim[] = " ";
	printf("m size: %ld\n", m);
	char *trunks;

	trunks = strtok(buff, delim);
	while (trunks != NULL)
	{

		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	printf("%s", trunks);
	free(buff);


	return (0);
}
