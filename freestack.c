#include "monty.h"

/**
 * free_stack - Frees a doubly linked list
 * @head: Head of the stack
 *
 * Description: This function frees all nodes in a doubly linked list.
 * It iterates through the list, freeing each node, and sets the head to NULL.
 */

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
