#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - Frees a list and sets head to NULL
  * @head: Pointer to address of a list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
