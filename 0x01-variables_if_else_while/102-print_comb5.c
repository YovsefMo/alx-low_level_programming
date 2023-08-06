#include <stdio.h>
/**
 * main - prints 2 digit combinations twice
 * Description: Prints unique 2 digit combinations twice
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0 ; n <= 98 ; n++)
	{
		for (m = n + 1 ; m <= 99 ; m++)
		{
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);

			if (n == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
