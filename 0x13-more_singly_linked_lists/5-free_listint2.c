#include "lists.h"
/**
 * free_listint - frees a listtint_t list
 * @head: Const pointer of a listint_t list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
