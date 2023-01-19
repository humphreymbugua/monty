#include "monty.h"

/**
 * init_stack - Initializes a stack_t stack with beginning
 *              stack and ending queue nodes
 * @stack: pointer to an unitialized stack_t stack
 * Return: If an error occurs - EXIT_FAILURE
 *         else, EXIT_SUCCESS
 */

int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}
