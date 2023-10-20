#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - Doubly linked list node for stack and queue
 * @n: Integer value
 * @prev: Points to the previous element in the stack (or queue)
 * @next: Points to the next element in the stack (or queue)
 *
 * Description: A structure for a doubly linked list node used in
 * stack, queue, LIFO, and FIFO operations in the Holberton project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - Variables to carry arguments, file, and line content
 * @arg: Argument value
 * @file: Pointer to the Monty file
 * @content: Line content
 * @lifi: Flag to switch between stack and queue mode
 *
 * Description: A structure to carry values and state throughout the program.
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - Opcode and its corresponding function
 * @opcode: The opcode string
 * @f: Function pointer to handle the opcode
 *
 * Description: A structure representing an opcode and its associated function
 * for stack, queue, LIFO, and FIFO operations in the Holberton project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void pall_p(stack_t **head, unsigned int number);
void push_p(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void queue_p(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void free_stack(stack_t *head);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);

#endif
