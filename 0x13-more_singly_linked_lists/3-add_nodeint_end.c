#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: pointer to first node
 * @n: value of first element of the node
 * Return: address of newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
