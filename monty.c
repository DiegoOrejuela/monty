#include "monty.h"

/**
 * main - Function
 * @argc: number of arguments.
 * @argv: array of pointer that storage the input
 * arguments for the prompt.
 *
 * Return: 0 if it's success, and other value if not.
 */

void push(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[])
{
	instruction_t opcodes[] = {
		{"push", push}/* , {"pall", pall}, {"pint", pint}, */
		/* {"pop", pop}, {"swap", swap}, {"add", add}, */
		/* {"nop", nop} */
	};

	stack_t *head = NULL;
	int i;
	unsigned int counter = 1;
	FILE *file;
	ssize_t ch_read = 0;
	char *buffer;
	char *lines[2];
	size_t sizebuf = 0;
	(void)argc;

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		return (1);
	}
	while(1)
	{
		ch_read = getline(&buffer, &sizebuf, file);
		if (ch_read == -1)
			return(1);
		printf("%s", buffer);
		lines[0] = strtok(buffer, " \n");
		lines[1] = strtok(NULL, " \n");
		for (i = 0; i < 1; i++)
		{
			if(strcmp(lines[0], opcodes[i].opcode) == 0)
			{
				opcodes[i].f(&head, i);
			}

		}
		counter++;
	}
	return(0);
}

void push(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	printf("Estamos en la función PUSH");
}
