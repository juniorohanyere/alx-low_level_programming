#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *		 of a linked list
 *
 * @head: pointer to the first node
 *
 * Return: return the head node's data
 *	   return 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	int new_node;
	listint_t *list, *next;

	if (head == NULL)
		return (0);
	list = *head;
	next = list->next;
	new_node = list->n;
	free(list);
	*head = next;
	return (new_node);
}
