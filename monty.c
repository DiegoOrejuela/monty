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
		{"swap", swap}, {"add", add}, {"nop", nop}
	};

	stack_t *head = NULL;
	int i;
	unsigned int counter = 1;
	FILE *file;
	ssize_t ch_read = 0;
	char *buffer, *lines[2];
	size_t sizebuf = 0;

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		ch_read = getline(&buffer, &sizebuf, file);
		if (ch_read == -1)
		{
			free(buffer);
			return (0);
		}
		lines[0] = strtok(buffer, " \n");
		lines[1] = strtok(NULL, " \n");
		for (i = 0; i < 4; i++)
		{
			if (strcmp(lines[0], opcodes[i].opcode) == 0)
			{
				if (lines[1] != NULL)
					n = atoi(lines[1]);
				opcodes[i].f(&head, counter);
			}
		}
		if (i == 4)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", counter, argv[0]);
			exit(EXIT_FAILURE);
		}
		counter++;
	}
	return (0);
}
