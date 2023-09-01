#include "main.h"
#include <stdio.h>
/**
 * main - prints number of args
 * @argc: Number of command line args
 * @argv: Array of command line args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (counter = 0 ; counter < argc ; counter++)
			printf("%d\n", counter);
	}
	return (0);
}
