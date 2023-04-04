#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - to add a new node
 * @new_node: pojbtwr to new node
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(str);
		new_node->next = *head;

		*head = new_node;
	}

	return (new_node);
}

/**
 * int_strlen: to check length of string
 * @len: length
 *
 * Return: len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
