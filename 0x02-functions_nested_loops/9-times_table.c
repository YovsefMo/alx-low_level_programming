#include "main.h"
/**
 * times_table - speaks itself
 * Return: void
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;
			_putchar(z + '0');
			

			if (z != (x * x))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
