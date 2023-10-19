#include "monty.h"

/**
 * pall_p - Prints the elements of the stack
 * @head: A pointer to the stack's head
 * @counter: The line number (not used)
 *
 * Description: This function prints all elements of the stack from top to
 * bottom.
 */
void pall_p(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
