#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: Const pointer of a listint_t list
 * @n: input
 *
 * Return: new node address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *endNode;

	current = *head;

	endNode = malloc(sizeof(listint_t));
	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = endNode;

	return (endNode);
}
