#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to list to be freed
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}

