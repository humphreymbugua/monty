#include "monty.h"

/**
 * check_mode - Checks if a stack_t linked list is in stack or queue mode
 * @stack: pointer to the top (stack) or bottom (queue)
 *         of a stack_t linked list
 * Return: If the stack_t is in stack mode - STACK, 0
 *         else if the stack_t is in queue mode - QUEUE, 1
 *         else, 2.
 */

int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
