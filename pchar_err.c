#include "monty.h"

/**
 * pchar_error - pchar error messages for empty stacks
 *               and non-character values
 * @line_number: Line number in Monty bytecodes file where error occurred
 * @message: The corresponding error message to print
 * Return: (EXIT_FAILURE)
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
