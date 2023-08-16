#include "main.h"
/**
 * reverse_array - reverses int array
 * @a: target array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;

	for (x = n - 1 ; x >= 0 ; x--)
	{
		_putchar(a[x]);

		if (x != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
