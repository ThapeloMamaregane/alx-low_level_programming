#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: start of a linked list
 *
 * Return: Address of the node,
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *b = head;
	listint_t *a = head;

	while (b && a && a->next)
	{
		a = a->next->next;
		b = b->next;
		if (b == a)
		{
			b = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
