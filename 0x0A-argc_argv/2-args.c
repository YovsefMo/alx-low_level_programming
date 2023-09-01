#include "main.h"
#include <stdio.h>
/**
 * main - prints program name
 * @argc: Number of command line args
 * @argv: Array of command line args
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int counter;

	for (counter = 0 ; counter < argc ; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
