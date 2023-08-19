#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of command line args
 * @argv: array name
 * Return: multiplication result or 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 1 || argc ==2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = 1;

		for (y = 1 ; y < 3 ; i++)
			x *= atol(argv[i]);

		printf("%d\n", x);

	}

	return (0);
}
