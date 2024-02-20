#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguements
 * without using ac
 * @ac: the arguement counter
 * @av: the arguement vector or
 * array of arguements
 * Return: return (0)
*/
int main(int ac, char **av)
{
	printf("The arguements are:\n");
	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
