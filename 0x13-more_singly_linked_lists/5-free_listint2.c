#include "lists.h"

/**
 * free_listint2 - function that frees a list
 *		   and sets the head to NULL
 *
 * @head: pointer to the first node of the list
 *
 * Return: return nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *new_node, *list;

	if (head != NULL)
	{
		new_node = *head;
		while ((list = new_node) != NULL)
		{
			new_node = new_node->next;
			free(list);
		}
		*head = NULL;
	}
}
