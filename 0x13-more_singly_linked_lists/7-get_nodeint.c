#include "lists.h"
/**
 * get_nodeint_at_index - gets node at an index of a list
 * @head: pointer to a listint_t list
 * @index: index of the node
 *
 * Return: node no index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int counter;

	ptr = head;

	for (counter = 0 ; counter < index ; counter++)
	{
		if (ptr)
			ptr = ptr->next;
		else
		{
			ptr = NULL;
			break;
		}
	}

	return (ptr);
}
