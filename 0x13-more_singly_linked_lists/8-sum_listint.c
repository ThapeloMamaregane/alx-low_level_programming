#include "lists.h"
/**
 * sum_listint - sums the n value of a linked list of listint_t
 * @head: pointer to the head of the list
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp_h;

	if (!head)
		return (0);
	tmp_head = h;
	while (tmp_h)
	{
		sum += tmp_h->n;
		tmp_h = tmp_h->next;
	}
	return (sum);
}
