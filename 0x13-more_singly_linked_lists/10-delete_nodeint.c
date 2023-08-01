#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: head of list
 * @index: The location in the list of the node to delete
 *
 * Return: 1 upon success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ctr = 0;
	listint_t *tmp_h, *tmp_node;

	if (!*head)
		return (-1);
	tmp_h = *head;
	if (index == 0)
	{
		tmp_node = tmp_h->next;
		*head = tmp_node;
		free(tmp_h);
		return (1);
	}
	while (tmp_h)
	{
		if (ctr + 1 == index)
		{
			tmp_node = tmp_h->next;
			tmp_h->next = tmp_node->next;
			free(tmp_node);
			return (1);
		}
		tmp_h = tmp_h->next;
		ctr++;
	}
	return (-1);
}
