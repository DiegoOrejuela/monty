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
	(void)line_number;

	if (stack != NULL && *stack != NULL && (*(*stack)).next != NULL)
	{
		for (left = *stack; (*left).next != NULL; left = (*left).next)
		{}

		(*(*left).prev).next = NULL;

		(*left).prev = NULL;
		(*left).next = *stack;
		(*(*stack)).prev = left;

		*stack = left;
	}
}
