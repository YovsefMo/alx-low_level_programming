#include "lists.h"
/**
 * sum_listint - sums all of the ns of a list
 * @head: a pointer to a head listint_t list
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
