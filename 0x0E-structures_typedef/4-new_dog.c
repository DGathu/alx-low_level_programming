#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to new array
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int l, x;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	l = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}
	arr = (char*) malloc(l * sizeof(char) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < l; x++)
	{
		arr[x] = str[x];
	}
	arr[x] = '\0';

	return (arr);
}

#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *dog1_name, *dog1_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1_name = _strdup(name);

	if (dog1_name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1_owner = _strdup(owner);

	if (dog1_owner == NULL)
	{
		free(dog1_name);
		free(dog1);
		return (NULL);
	}
	dog1->name = dog1_name;
	dog1->age = age;
	dog1->owner = dog1_owner;

	return (dog1);
}
