#include "monty.h"

/**
 * f_mod - Computes the remainder of the division of the second
 *        top element of the stack by the top element of the stack.
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction.
 * Return: No return value.
 *
 * Description: This function calculates the remainder of the division of the
 * second top element of the stack by the top element of the stack and stores
 * the result in the second top element, removing the top element from the stack.
 *
 * If the stack contains less than 2 elements, it prints an error message and
 * exits with EXIT_FAILURE. Additionally, if the top element of the stack is 0,
 * it prints an error message for division by zero and exits with EXIT_FAILURE.
 */
 
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
