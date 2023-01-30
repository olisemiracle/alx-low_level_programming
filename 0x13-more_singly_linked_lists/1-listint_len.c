#include "lists.h"
/**
 * listint_len - counts number of elements in a singly linked list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
