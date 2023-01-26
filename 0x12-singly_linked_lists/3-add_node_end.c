#include "lists.h"
/**
 * add_node_end - adds a node to the end of a singly link list
 * @head: pointer to the first node or NULL
 * @str: string to be duplicated
 * Return: address of the new node;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
		*head = temp = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
