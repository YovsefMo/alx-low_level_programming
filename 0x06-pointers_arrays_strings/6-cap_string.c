#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: targeted string
 * Return: s
 */
char *cap_string(char *s)
{
	int x, z;
	
	int sprt[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			if (x == 0)
				s[x] = s[x] - 32;
			else
			{
				for (z = 0 ; z < 13 ; z++)
				{
					if (sprt[z] == s[x - 1])
					{
						s[x] = s[x] - 32;
					}

				}
			}
		}
	}

	return (s);

}
