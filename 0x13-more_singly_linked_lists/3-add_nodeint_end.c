#include "lists.h"
/**
 * add_nodeint_end - adds new node to end of linked list
 * @head: start of linked lists
 * @n: integer to add to n_node
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node, *temp_h;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (!*head)
		*head = n_node;
	else
	{
		temp_h = *head;
		while (temp_h->next)
			temp_h = temp_h->next;
		temp_h->next = n_node;
	}
	return (n_node);
}
