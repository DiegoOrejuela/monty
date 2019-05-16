#include "monty.h"
/**
 * pchar - print the integer at the top of the stack like a char
 * @stack: double linked list stack_t.
 * @line_number: line of opcode in the file.m
 *
 * Return: nothing.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	if (stack_len(*stack) == 0)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n > 127 || (*stack)->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
