#include "lists.h"

/**
 * free_listint_safe - Prints a linked list
 * @h: Pointer to address of a linked list
 *
 * Return: Size of list that has been freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp;

	while (*h && *h > (*h)->next)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		++i;
	}
	if (*h)
	{
		free(*h);
		++i;
	}
	*h = NULL;
	return (i);
}
