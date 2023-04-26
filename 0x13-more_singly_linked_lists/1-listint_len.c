#include "lists.h"
/**
 * listint_len -returning number of elements in linked list.
 * @h: head of list.
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
