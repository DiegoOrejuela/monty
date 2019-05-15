#include "monty.h"
/**
 * push - add a node to the stack
 * @stack: the pointer to the stack
 * @line_number: the number of the line that the command executes
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int data;
	int check;

	if (n != NULL)
		check = check_int(n);
	if (check == 1)
		data = atoi(n);
	if (check == 0 || n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = data;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
/**
 * check_int - check if a string contain just a int number
 * @str: the string to check
 * Return: 1 if is an int, 0 otherwise
 */
int check_int(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] > 57 || str[i] < 48) && str[0] != 45)
			return (0);
		i++;
	}
	return (1);
}
