#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction (unused).
 * Return: No return value.
 *
 * Description: This function prints the characters stored as integer values in
 * the stack until a value outside the printable ASCII range is encountered or
 * the stack is empty. It appends a newline character after the string.
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
