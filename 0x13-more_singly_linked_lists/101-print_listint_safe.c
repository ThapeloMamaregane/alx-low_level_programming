#include "lists.h"
/**
 * print_listint_safe - prints the elements in linked list
 * @head: beginning of linked list
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a = 0, b;
	const listint_t *tmp_h = head, *check_next;

	while (temp_h)
	{
		printf("[%p] %d\n", (void *)tmp_h, tmp_h->n);
		a++;
		tmp_h = tmp_h->next;
		check_next = head;
		b = 0;
		while (b < a)
		{
			if (tmp_h == check_next)
			{
				printf("-> [%p] %d\n", (void *)tmp_h, tmp_h->n);
				return (a);
			}
			check_next = check_next->next;
			b++;
		}
	}
	return (i);
}
