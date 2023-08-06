#include <stdio.h>
/**
 * main - prints 0 to f
 * Description: Prints single digit numbers of base 16
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 16 ; n++)
	{
		if (n < 10)
		{
			putchar(n + 48);
		}
		else
		{
			putchat(n + 87);
		}
	}

	putchar('\n');

	return (0);
}
