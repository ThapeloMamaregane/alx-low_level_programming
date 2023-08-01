#include "lists.h"
/**
 * reverse_listint - Reverses a given list
 * @head: beginning of linked list
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next = NULL;

	while (head && *head)
	{
		current = (*head)->next;
		(*head)->next = next;
		next = *head;
		*head = current;
	}
	*head = next;
	return (*head);
}
