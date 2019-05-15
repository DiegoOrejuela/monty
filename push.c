#include "monty.h"
/**
 * push - add a node to the stack
 * @stack: the pointer to the stack
 * @line_number: the number of the line that the command executes
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		exit(1);
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
	printf("node add %d\n", (*stack)->n);
}
