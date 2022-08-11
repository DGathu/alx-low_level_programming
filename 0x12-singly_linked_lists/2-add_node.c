#include "lists.h"

/**
 * _strlen - returns length of str
 * @s: string
 *
 * Return: length
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds new node at beginning of list_t list
 * @head: head of linked list
 * @str: string
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *string;
	int leng;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		string = NULL;
		leng = 0;
	}
	else
	{
		string = strdup(str);
		leng = _strlen(str);
	}
	new_node->len = leng;
	new_node->str = string;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
