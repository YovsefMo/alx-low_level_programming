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
		_putchar('0');

		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;

			if (z < 10 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if(z >= 19)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
