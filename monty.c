#include "monty.h"

void _free(char *buffer, stack_t *head, FILE *file);

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
		{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", sub}, {"mul", mul},
		{"div", _div}, {"mod", mod}, {"pchar", pchar}, {"pstr", pstr},
		{"queue", queue}, {"stack", stack}
	};
	stack_t *head = NULL;
	unsigned int counter = 1, i;
	FILE *file;
	ssize_t ch_read = 0;
	char *buffer, *lines[2];
	size_t sizebuf = 0;
	n[1] = "stack";
	file = check_file(argc, argv[1]);
	while ((ch_read = getline(&buffer, &sizebuf, file)) != -1)
	{
		lines[0] = strtok(buffer, " \t\n");
		if (lines[0] != NULL)
		{
			if (lines[0][0] != '#')
			{
				lines[1] = strtok(NULL, " \t\n");
				for (i = 0; i < 15; i++)
				{
					if (strcmp(lines[0], opcodes[i].opcode) == 0)
					{
						n[0] = lines[1], opcodes[i].f(&head, counter);
						break;
					}
				}
				if (i == 15)
				{
					fprintf(stderr, "L%d: unknown instruction %s\n", counter, lines[0]);
					_free(buffer, head, file);
					exit(EXIT_FAILURE);
				}
			}
		}
		counter++;
	}
	_free(buffer, head, file);
	return (0);
}

/**
 * _free - liberate the buffer, stack and close the file.
 * @buffer: buffer on line.
 * @head: stack type stack_t;
 * @file: file steam open.
 *
 * Return: nothing.
 */
void _free(char *buffer, stack_t *head, FILE *file)
{
	free(buffer);
	free_stack(head);
	fclose(file);
}
