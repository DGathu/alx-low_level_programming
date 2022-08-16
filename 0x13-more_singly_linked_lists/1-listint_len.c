#include "lists.h"

/**
 * listint_len - returns number of elements in linked listint_t list
 * @h: list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
