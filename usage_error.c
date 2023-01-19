#include "monty.h"

/**
 * usage_error - Prints usage error messages.
 * Return: (EXIT_FAILURE) always.
 */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
