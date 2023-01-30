#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to first node
 * @idx: position to insert node
 * @n: value of newnode data (n)
 * Return: address of newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i = 0, count = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
	{
		if (idx == 0)
		{
			*head = newnode;
			newnode->n = n;
			newnode->next = NULL;
			return (newnode);
		}
		return (NULL);
	}
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > count)
		return (NULL);
	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
