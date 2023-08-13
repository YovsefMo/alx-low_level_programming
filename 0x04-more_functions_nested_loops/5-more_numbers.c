#include "main.h"

/**
 * more_numbers - Prints 0 to 14 repeatedly
 *
 * Return: void
 */
void more_numbers(void)
{
	int x, z;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}

		_putchar('\n');
	}
}

