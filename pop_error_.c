#include "monty.h"

/**
 * pop_error - Prints pop error messages for empty stacks
 * @line_number: Line number in script where error occured
 * Return: (EXIT_FAILURE)
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}
