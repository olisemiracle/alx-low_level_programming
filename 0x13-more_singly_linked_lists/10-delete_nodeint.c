#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given position
 * @head: pointer to first node
 * @index: position to be deleted
 * Return: 1 if successful, -1 if not successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prevnode;
	unsigned int i = 0, count = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (index > count)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
	}
	else
	{
		while (i < index)
		{
			prevnode = temp;
			temp = temp->next;
			i++;
		}
		prevnode->next = temp->next;
	}
	free(temp);
	return (1);
}
