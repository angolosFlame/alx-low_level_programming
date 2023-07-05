# include <stdio.h>
#include "lists.h"

/**
 * print_ listint_s - prints the elements of the linked list
 * @n: integer
 * @next: points to the next node
 * 
 */

size_t print_listint(const listint_t *h)
{
	size_t node_no = 0;
	
	while(h)
	{
		printf("%d\n",h->n);
		h = h->next;
		node_no++;
	}
	return (node_no);
}
