#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'q' || ch == 'e') !=1)
		{	
			purtchar(ch);
		}
	
	}
	putchar('\n');
	return (0);
}
