#include "monty.h"

/**
 * main - Function
 * @argc: number of arguments.
 * @argv: array of pointer that storage the input
 * arguments for the prompt.
 *
 * Return: 0 if it's success, and other value if not.
 */
int main(int argc, char *argv[])
{
	instruction_t opcodes[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub}, {"mul", mul}
	};
	stack_t *head = NULL;
	int i;
	unsigned int counter = 1;
	FILE *file;
	ssize_t ch_read = 0;
	char *buffer, *lines[2];
	size_t sizebuf = 0;

	file = check_file(argc, argv[1]);
	while (1)
	{ch_read = getline(&buffer, &sizebuf, file);
		if (ch_read == -1)
		{
			free(buffer), free_stack(head), fclose(file);
			return (0);
		}
		lines[0] = strtok(buffer, " \t\n");
		lines[1] = strtok(NULL, " \t\n");
		for (i = 0; i < 9; i++)
		{
			if (lines[0] == NULL)
				break;
			if (strcmp(lines[0], opcodes[i].opcode) == 0)
			{
				n = lines[1], opcodes[i].f(&head, counter);
				break;
			}
		}
		if (i == 9)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", counter, lines[0]);
			free(buffer), free_stack(head), fclose(file), exit(EXIT_FAILURE);
		}
		counter++;
	}
	return (0);
}
