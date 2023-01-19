#include "monty.h"

/**
 * div_error - division error messages for division by zero (0)
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: (EXIT_FAILURE)
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}
