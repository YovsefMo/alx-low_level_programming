#include <stdio.h>
/**
 * main - prints 2 digit combinations
 * Description: Prints unique 2 digit combinations
 * Return: 0
 */
int main(void)
{
	int x, y, z;
	
	for (x = 0 ; x != 8 ; x++)
	{
		for (y = x + 1 ; y != 9 ; n++)
		{
			z = y + 1
			do {
				putchar(x + 48)
				putchar(y + 48)
				putchar(z + 48)

				if ( x != z)
				{
					putchar(',');
					putchar(' ');
				}
				z++;

			}while (z != 10);
		}
	}
	putchar('\n');
	return (0);
}
