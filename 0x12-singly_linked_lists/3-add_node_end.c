#include "lists.h"
/**
 * add_node_end - adds a new note at the end of a list_t
 * @head: Const double pointer of struct list_t beginning
 * @str: Const char input for data to be added
 *
 * Return: list with new node for list_t list or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
