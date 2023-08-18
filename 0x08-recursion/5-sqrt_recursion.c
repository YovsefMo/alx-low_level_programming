#include "main.h"
/**
 * _sqrt_recursion - root
 * @n: input
 * Return: root or -1
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (_sqrt_recursion2(n, 0));
}
/**
 * _sqrt_recursion2 - root
 * @n: input
 * @i: input (checker)
 * Return: root or -1
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);

	return (_sqrt_recursion2(n, i + 1));
}
