#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at index;
 * @head: pointer to a pointer to listsint_t list
 * @idx: index
 * @n: data part
 *
 * Return: address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newNode;
	unsigned int counter = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	current = *head;

	while (counter < idx - 1 && current)
	{
		current = current->next;
		counter++;
	}

	if (counter == idx - 1 && current)
	{
		newNode->next = current->next;
		current->next = newNode;
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
