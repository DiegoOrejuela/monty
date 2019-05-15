#include "monty.h"
/**
 * check_file - check if the file exist and open it.
 * @argc: count arguments to main.
 * @file: path file to open.
 *
 * Return: the variable FILE with permissions of read.
 */
FILE *check_file(int argc, char *file)
{
	FILE *path_file;

	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	path_file = fopen(file, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (path_file);
}
