#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: head of linked list
 * @index: nth node
 *
 * Return: nth node if success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while ((x < index) && head != NULL)
	{
		head = head->next;
		x++;
	}
	if (x == index)
	{
		return (head);
	}
	return (NULL);
}
