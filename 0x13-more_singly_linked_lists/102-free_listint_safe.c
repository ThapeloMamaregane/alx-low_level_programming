#include "lists.h"
/**
* free_listint_safe - frees the list
* @h: Pointer to pointer to the start of the list
* Return: Size of the list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
size_t i;
listint_t *j;

i = 0;
if (!h)
return (i);
while (*h && *h > (*h)->next)
{
j = *h;
*h = (*h)->next;
free(j);
i++;
}
if (*h)
{
free(*h);
*h = NULL;
i++;
}
return (i);
}
