#include "monty.h"

/**
 * f_stack - Sets the data structure to behave as a stack (LIFO).
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction (unused).
 * Return: No return value.
 *
 * Description: This function sets the behavior of the data structure to
 * behave as a stack (Last-In, First-Out), where the top element is the one
 * that will be removed or accessed next. It updates the 'bus' structure's
 * 'lifi' field to 0, indicating the stack mode.
 */
 
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
