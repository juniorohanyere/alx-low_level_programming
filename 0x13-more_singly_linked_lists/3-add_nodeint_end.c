#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *            at the end of a list
 *
 * @head: pointer to the first node of the list
 * @n: integer element to add to new node
 *
 * Return: return the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
