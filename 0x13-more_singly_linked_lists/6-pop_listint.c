#include "lists.h"
/**
 * pop_listint - deletes the first node in a list
 * @head: pointer to first node
 * Return: data in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
