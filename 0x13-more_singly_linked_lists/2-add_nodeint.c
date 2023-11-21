#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds node to the top
 * @head: value to first node
 * @n: value to new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node =  malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
