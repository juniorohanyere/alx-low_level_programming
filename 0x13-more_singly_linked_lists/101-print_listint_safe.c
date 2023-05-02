#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 *
 * @head: pointer to the first node of the linked list
 *
 * Description: the function can print lists with a loop
 *		if the function fails, the program exitss with a status of 98
 *
 * Return: return the number of nodes in the linked list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a = head, *b = head;
	size_t p = 0;
	int l = 0;

	while (a && b && b->next)
	{
		if ((b->next->next) == NULL)
			break;
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			a = a->next;
			l = 1;
			break;
		}
	}
	if (!l)
	{
		while (head)
		{
			p++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (p);
	}
	while (head)
	{
		p++;
		if (head == a)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
