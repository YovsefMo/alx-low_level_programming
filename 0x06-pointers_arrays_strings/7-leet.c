#include "main.h"
/**
 * leet - 1ee7
 * @s: Pointer to targeted array
 * Return: s
 */
char *leet(char *s)
{
	char lee7[] = "aeotlAEOTL";
	char l337[] = "4307143071";

	int x, z;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (z = 0 ; z < 10 ; z++)
		{
			if (s[x] == lee7[z])
			{
				s[x] = l337[z];
			}
		}
	}

	return (s);
}
