#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: return a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *list;

	if (!head || !(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);
	list = *head;
	node = NULL;
	while (1)
	{
		if (!node)
		{
			node = *head;
			list = list->next;
			node->next = NULL;
			*head = node;
		}
		else
		{
			node = list;
			list = list->next;
			node->next = *head;
			if (!list)
			{
				list = node;
				break;
			}
			*head = node;
		}
	}
	*head = list;
	return (*head);
}
