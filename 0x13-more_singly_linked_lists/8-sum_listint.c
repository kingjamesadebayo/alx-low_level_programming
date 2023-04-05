#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: first node in the linked list
 *
 * Return: if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
