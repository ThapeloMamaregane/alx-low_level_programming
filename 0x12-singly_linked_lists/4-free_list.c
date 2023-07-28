#include "lists.h"

/**
 * free_list - funtion with one arguement
 * @head: head of linked list
 *
 * Description: Frees a list
 * Return: na
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
