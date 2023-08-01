#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at index
 * @head: Pointer to address of a list
 * @idx: Index of the list where new node should be added
 * @n: value of the inserted node
 *
 * Return: Address of the new node,Null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp_h = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	while (*head && idx)
	{
		if (!temp_h)
			return (NULL);
		if (i == idx - 1)
			break;
		temp_h = temp_h->next;
		++i;
	}
	new_node->n = n;
	if (idx)
	{
		new_node->next = temp_h->next;
		temp_h->next = new_node;
	}
	else
	{
		new_node->next = temp_h;
		*head = new_node;
	}
	return (new_node);
}
