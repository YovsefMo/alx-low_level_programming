#include <stdlib.h>
#include "main.h"
/**
 * str_concat - cat 2 strings
 * @s1: first input
 * @s2: second input
 * Return: s1 and s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z, q, w = 0, e = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	z = x + y + 1;

	s3 = (char *)malloc(z * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (; s1[w] != '\0' ; w++)
		s3[q] = s1[q];
	for (; s2[e] != '\0' ; w++)
	{
		s3[q] = s2[e];
		e++;
	}

	return (s3);
}
