#include "monty.h"

/**
 * unknown_op_error - Prints unknown instruction error messages.
 * @opcode: opcode where error occurred
 * @line_number: Line number in Monty bytecodes file where error occured
 * Return: (EXIT_FAILURE)
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}
