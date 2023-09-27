#include "lists.h"

/**
 * @head: listint_t list to be freed
 * free_listint - frees a linked list
 * 
 */
void free_listint(listint_t *head)
{
	listint_t *actual_node;
	listint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}

