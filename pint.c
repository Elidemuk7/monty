#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @head: A pointer to the stack head.
 * @counter: The current line number being executed.
 *
 * Description: This function prints the integer value at the top of the stack.
 * If the stack is empty, it prints an error message and exits with failure status.
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
