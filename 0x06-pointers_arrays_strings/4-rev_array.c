#include "main.h"
/**
 * reverse_array - reverses int array
 * @a: target array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, swp;

	x = n - 1;

	for (y = 0 ; y < n / 2 ; y++)
	{
		swp = a[i];
		a[i] = a[x];
		a[x--] = swp;
	}
}
