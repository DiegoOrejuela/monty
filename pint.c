#include "monty.h"
/**
 * pint - prints the top value of the stack
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m
 *
 * Return: nothing.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack_len(*stack) == 0)
	{
		fprintf(stderr, "L%ud: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
