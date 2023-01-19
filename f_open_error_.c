#include "monty.h"

/**
 * f_open_error - Prints file opening error messages with file name.
 * @filename: Name of file failed to open
 * Return: (EXIT_FAILURE) always.
 */

int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
