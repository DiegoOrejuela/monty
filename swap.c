#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: the pointer to the list
 * @line_number: the line number of the monty file
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int i;
	size_t l;

	l = stack_len(*stack);
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (l == 2)
	{
		aux = (*stack)->next;
		aux->next = *stack;
		aux->prev = NULL;
		(*stack)->next = NULL;
		(*stack)->prev = NULL;
		*stack = aux;
	}
	else
	{
		aux = *stack;
		for (i = 0; i < 2; i++)
			aux = aux->next;
		(aux->prev)->prev = NULL;
		(aux->prev)->next = *stack;
		(*stack)->prev = aux->prev;
		(*stack)->next = aux;
		aux->prev = *stack;
		*stack = (*stack)->prev;
	}

}
