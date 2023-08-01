#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
