#include "monty.h"

/**
 * free_stack - Frees a stack_t stack
 * @stack: A pointer to the top (stack) or
 *         bottom (queue) of a stack_t
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
