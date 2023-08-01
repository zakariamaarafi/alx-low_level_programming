#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node to certain index in the
 * linked list
 * @head: 1st node in the linked list
 * @index: the index of the node to return
 *
 * Return: point to the node we're looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
