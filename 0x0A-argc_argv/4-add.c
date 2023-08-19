#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds numbers
 * @argc: number of command line args
 * @argv: array name
 * Return: 0 or 1 if error
 */
int main(int argc, char *argv[])
{
	int x, y, length;
	int sum = 0;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (x = 1 ; x < argc ; x++)
		{
			ptr = argv[x];
			length = strlen(ptr);

			for (y = 0 ; y < length ; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n)", sum);
	}
	return (0);
}
