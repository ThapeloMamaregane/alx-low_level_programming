#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: head of linked list
 *
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if (*head)
	{
		i = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
		return (i);
}
