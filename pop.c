#include "monty.h"

/**
 * f_pop - Removes the top element of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction.
 * Return: No return value.
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
