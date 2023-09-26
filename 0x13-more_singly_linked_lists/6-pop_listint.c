#include "lists.h"
/**
 * pop_listint - deletes the head node and returns its n
 * @head: Pointer to a pointer to a listint_t list
 *
 * Return: n or 0;
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
