#include "main.h"
/**
 * leet - 1ee7
 * @s: Pointer to targeted array
 * Return: s
 */
char *leet(char *s)
{
	int lee7[] = "aeotlAEOTL";
	int 1ee7[] = "4307143071";

	int x, z;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (z = 0 ; z < 10 ; z++)
		{
			if (s[x] == lee7[z])
			{
				s[x] = 1ee7[z];
			}
		}
	}

	return (s);
}
