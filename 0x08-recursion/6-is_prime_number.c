#include "main.h"
/**
 * is_prime_number - checks prime
 * @n: input
 * Return: 1 if prime, 0 othrewise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number2(n, n-1));
}
/**
 * is_prime_number2 - checks prime
 * @n: input
 * @i: checker
 * Return: 1 if prime, 0 othrewise
 */
int is_prime_number2(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_number2(n, i - 1);
}
