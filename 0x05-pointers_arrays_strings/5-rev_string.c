#include "main.h"
/**
 * rev_string - reverses string components
 * @s: targetted string pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int i, x, z;

	char swp;

	i = 0;

	while (s[i] !='\0' )
		i++;

	x = i - 1;

	for (z = 0 ; z < i / 2 ; z++)
	{
		swp = s[z];
		s[z] = s[x];
		s[x--] = swp;
	}
}
