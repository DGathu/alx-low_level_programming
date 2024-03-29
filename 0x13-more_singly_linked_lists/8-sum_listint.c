#include "lists.h"

/**
 * sum_listint - returns sum of all data (n)
 * @head: head of linked list
 *
 * Return: sum if sucess
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
