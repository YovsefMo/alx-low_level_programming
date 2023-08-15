#include "main.h"
/**
 * swap_int - swaps 2 ints
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
