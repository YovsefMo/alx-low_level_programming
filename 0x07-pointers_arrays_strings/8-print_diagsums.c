#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - main diagonal sum
 * @a: 2d arrau input
 * @size: size of it (3x3) then 3, etc..
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, sum = 0, sum1 = 0;

	for (x = 0 ; x < size ; x++)
	{
		sum += a[x * size + x];
	}

	for (y = size - 1 ; y >= 0 ; y++)
	{
		sum1 =+ a[y * size + ( size - y - 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
