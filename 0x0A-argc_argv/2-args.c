#include <stdio.h>
#include "main.h"
/**
 * main - prints all args
 * @argc: number of command line args
 * @argv: array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
