#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: variable pointer to the head of the list
 */
void free_listint(listint_t *head)
{
listint_t *current = head;
listint_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
head = NULL;
}
