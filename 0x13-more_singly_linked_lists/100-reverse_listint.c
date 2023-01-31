#include "lists.h"
/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to first node
 * Return: pointer to first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
