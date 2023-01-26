#include "lists.h"
/**
 * list_len - counts in a singly link list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
