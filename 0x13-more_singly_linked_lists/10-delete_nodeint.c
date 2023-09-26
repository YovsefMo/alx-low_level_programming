#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to a pointer to a listint_t list
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *rmNode = *head;
	unsigned int counter = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = rmNode->next;
		free(rmNode);
		return (1);
	}

	while (current && counter < index - 1)
	{
		current = current->next;
		counter++;
	}

	if (current && counter == index - 1)
	{
		rmNode = current->next;
		current->next = rmNode->next;
		free(rmNode);
		return (1);
	}

	return (-1);


}
