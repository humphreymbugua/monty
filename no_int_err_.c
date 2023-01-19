#include "monty.h"

/**
 * no_int_error - Prints invalid monty_push argument error messages
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: (EXIT_FAILURE)
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
