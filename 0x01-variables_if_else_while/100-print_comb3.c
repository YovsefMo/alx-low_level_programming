#include <stdio.h>
/**
 * main - prints 2 digit combinations
 * Description: Prints unique 2 digit combinations
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = n + 1 ; m < 10 ; m++)
		{
			putchar(n + 48);
			putchar(m + 48);

			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
