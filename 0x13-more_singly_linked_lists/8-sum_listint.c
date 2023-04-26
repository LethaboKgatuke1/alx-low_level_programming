#include "lists.h"
/**
 * sum_listint - returning sum of all the datof linked list
 * @head: head of a list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
