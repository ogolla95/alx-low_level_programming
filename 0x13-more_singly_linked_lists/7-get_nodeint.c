#include "lists.h"

/**
 * @index: index of the node to return
 * @head: first node in the linked list
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

