#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
