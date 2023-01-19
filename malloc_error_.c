#include "monty.h"

/**
 * malloc_error - Prints malloc error messages
 * Return: (EXIT_FAILURE)
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
