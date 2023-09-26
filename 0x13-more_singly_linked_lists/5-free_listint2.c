#include "lists.h"
/**
 * free_listint2 - frees a listtint_t list and sets head to NULL
 * @head: Pointer to a pointer to the head of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (!head || !*head)
		return;

	current = *head;
	next = (*head)->next;

	while (next)
	{
		free(current);
		current = next;
		next = next->next;
	}

	free(current);
	*head = NULL;
}
