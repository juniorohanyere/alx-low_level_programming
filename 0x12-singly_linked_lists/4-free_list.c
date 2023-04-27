#include "lists.h"

/**
 * free_list - a function that frees a list
 *
 * @head: pointer to the first node of the list
 *
 * Return: return nothing
*/

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
