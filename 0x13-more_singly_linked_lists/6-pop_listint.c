#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t linked list
 * @head: head of linked list
 *
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	temp = *head;
	x = 0;

	if (*head == NULL)
	{
		return (x);
	}
	*head = temp->next;
	x = temp->x;
	free(temp);
	return (x);
}
