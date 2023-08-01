#include "lists.h"

/**
 * listint_len - the number of nodes in a list
 * @h: Pointer to a list
 *
 * Return: Number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		++s;
	}
	return (s);
}
