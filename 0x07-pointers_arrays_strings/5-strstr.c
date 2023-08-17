#include "main.h"
/**
 * strstr - checks for substring occurrence
 * @haystack: original string
 * @needle: substring
 * Return: pointer to substring occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y;

	while (haystack[x] != '\0')
	{
		for (y = 0 ; needle[y] != '\0' ; y++)
		{
			while (haystack[x] == needle[y])
			{
				x++;
				y++;
			}
		}
		if (needle[y] == '\0')
		{
			return (haystack);
		}
		x++;
	}

	return ('\0');
}
