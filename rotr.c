#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: double linked list stack_t.
 * @line_number: line number of command instruction.
 *
 * Return: nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *left;
	int n_temp;


	for (left = *stack; (*left).next != NULL; left = (*left).next)
	{}

	n_temp = (*left).n;

	(*(*left).prev).next = NULL;
	n[0] = convertd(n_temp);
	push(stack, line_number);
}
