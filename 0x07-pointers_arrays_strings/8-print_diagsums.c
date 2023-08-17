#include "main.h"
/**
 * print_diagsums - main diagonal sum
 * @a: 2d arrau input
 * @size: size of it (3x3) then 3, etc..
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, sum = 0;

	for (x = 0 ; x < size ; x++)
	{
			sum += a[x * size + x];	
	}
}
