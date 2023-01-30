#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: nth node
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0, count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
