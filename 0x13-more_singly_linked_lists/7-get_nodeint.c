#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of the list
 * @head: head of linked list
 * @index: index of the node to be returned
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp_h = head;

	while (tmp_h && i < index)
	{
		tmp_h = tmp_h->next;
		i++;
	}
	return (tmp_h);
}
