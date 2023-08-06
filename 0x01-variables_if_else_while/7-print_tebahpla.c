#include <stdio.h>
/**
 * main - prints alphabets
 * Description: Prints alphabets in lowercase reversed.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);

}
