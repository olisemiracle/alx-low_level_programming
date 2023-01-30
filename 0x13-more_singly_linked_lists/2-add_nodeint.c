#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: pointer to first node
 * @n: value of first element of the node
 * Return: address of newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->n = n;
		newnode->next = NULL;
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
