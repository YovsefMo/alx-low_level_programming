#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;
	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');

		if(n != 9)
		{
			putchar('n');
			purchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
