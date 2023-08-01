#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints linked list
 * @h: head of listint_t type
 *
 * Return: number of elements in linked list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t new_nodes = 0;
	const listint_t *tmp_h = NULL, *loop_node = NULL;

	tmp_h = h;
	if (!h)
		exit(98);
	while (tmp_h)
	{
		if (h->next == tmp_h && new_nodes > 2)
		{
			loop_node = tmp_h;
			printf("loop node: [%p] %d\n", (void *)loop_node, loop_node->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)tmp_h, tmp_h->n);
		tmp_h = tmp_h->next;
		new_nodes++;
	}
	return (new_nodes);
}
