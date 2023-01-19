#include "monty.h"

/**
 * monty_nop - Does absolutely nothing for the Monty opcode 'nop'
 * @stack: pointer to the top mode node of a stack_t linked list
 * @line_number: current working line number of a Monty bytecodes file
 */

void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
