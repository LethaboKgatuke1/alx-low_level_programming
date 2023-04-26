#include "lists.h"
/**
 * pop_listint - deleting the node of a linked list.
 * @head: head of a list.
 *
 * Return: head nodes data.
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);

}
