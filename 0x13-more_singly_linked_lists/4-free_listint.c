#include "lists.h"
/**
 * free_listint - frees a singly linke list
 * @head: pointer to first node;
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
}
