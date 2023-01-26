#include "lists.h"
/**
 * add_node - adds a list to the beginning of a singly link list
 * @head: pointer to the first node or NULL
 * @str: string to be duplicated
 * Return: address of the new node;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
