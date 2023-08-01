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
	unsigned int i = 0;
	listint_t *tmp_h, *new_node;

	if (!*head)
		return (-1);
	tmp_h = *head;
	if (index == 0)
	{
		new_node = tmp_h->next;
		*head = new_node;
		free(tmp_h);
		return (1);
	}
	while (tmp_h)
	{
		if (i + 1 == index)
		{
			new_node = tmp_h->next;
			tmp_h->next = new_node->next;
			free(tmp_node);
			return (1);
		}
		tmp_h = tmp_h->next;
		i++;
	}
	return (-1);
}
