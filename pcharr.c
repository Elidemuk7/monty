#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack, followed by a newline.
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction.
 * Return: No return value.
 *
 * Description: This function prints the character represented by the ASCII
 * value at the top of the stack. It ensures that the stack is not empty and
 * that the value is within the valid character range (0-127) before printing.
 */
 
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
