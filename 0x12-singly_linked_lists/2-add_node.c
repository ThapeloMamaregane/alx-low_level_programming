#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - Add an element to a list at the front of the list
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Return: Address of new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int j;

	j = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[j] != '\0')
		j++;
	new->len = j;
	new->next = *head;
	*head = new;
	return (*head);
}
