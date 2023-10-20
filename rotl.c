#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Pointer to the stack's head.
 * @counter: Line number of the instruction (unused).
 * Return: No return value.
 *
 * Description: This function rotates the stack, moving the top element to the
 * bottom while the rest of the elements move up. If the stack is empty or
 * contains only one element, no rotation occurs.
 */
 
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
