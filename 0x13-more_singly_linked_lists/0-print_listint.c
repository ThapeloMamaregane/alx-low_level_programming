#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints all elements of a linked list
  * @h: head of listint_t type
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (s);
}
