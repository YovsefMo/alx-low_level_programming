#include <stdio.h>
/**
 * main - putchar to print alphabet
 * Decription: Prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if ((n == 'q' || n == 'e') != 1)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
