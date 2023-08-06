#include <stdio.h>
/**
 * main - prints 2 digit combinations
 * Description: Prints unique 2 digit combinations
 * Return: 0
 */
int main(void)
{
	int n, m, i;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = n + 1 ; m < 10 ; m++)
		{
			for(i = m ; i < 10 ; i++)
			{
				putchar(n + 48);
				putchar(m + 48);
				putchat(i + 48);
			}

			if (n != 7 || m != 8 || i != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
