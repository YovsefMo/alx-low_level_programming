#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: first n bytes of s2
 * Return: NULL or s1 and first n from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int len1 = 0, len2 = 0,len3 = 0, counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
	{
		n = len2;
	}

	s3 = malloc(len1 + n);

	if (s3 == NULL)
		return (NULL);

	while (counter < len1)
	{
		s3[len3] = s1[len1];
		++counter;
		len3++;
	}
	while (counter <= n)
	{
		s3[len3] = s2[n];
		++counter;
		len3++;
	}

	return (s3);
}
