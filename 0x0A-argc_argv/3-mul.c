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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = 1;

		for (y = 1 ; y < 3 ; y++)
			x *= atoi(argv[y]);

		printf("%d\n", x);

	}

	return (0);
}
