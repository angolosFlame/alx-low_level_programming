#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node to the end of list
 * @head: A pointer to list node
 * @n: An integer data to put into the new node
 * Return: The address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_node, *temp;

	next_node = malloc(sizeof(listint_t));
	if (next_node == NULL)
		return (NULL);

	next_node->n = n;
	if (*head == NULL)
	{
		next_node->next = *head;
		*head = next_node;
	}
	else
	{
		next_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = next_node;
	}
	return (next_node);
}
