#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array content
 * @a: targeted array pointer
 * @n:number of elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
		{
			printf(", ");
		}
	}

	_putchar('\n');
}
