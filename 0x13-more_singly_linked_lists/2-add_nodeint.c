#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 *
 * @head: the first node of the element
 * @n: the address of the element
 *
 * Return: return the address of the new element, return NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
