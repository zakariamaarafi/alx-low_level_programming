#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free any linked list
 * @head: listint_t the  list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
