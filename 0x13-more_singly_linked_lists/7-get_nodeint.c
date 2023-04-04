#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  returns the nth node of as to linked list
 * @head: first node in the linked
 * @index: index of the node to return
 *
 * Return: pointerto the node we'er looking for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
