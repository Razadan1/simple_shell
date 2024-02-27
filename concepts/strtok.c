#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[] = "The String or the words";

	char delim[] = " ";

	char *trunks;

	trunks = strtok(str, delim);
	while (trunks != NULL)
	{

		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	printf("%s\n", trunks);
	return (0);
}

/* execve, getline, fork, wait, mallow */
