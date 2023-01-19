#include "monty.h"

/**
 * free_tokens - Frees the global op_toks array of strings
 */

void free_tokens(void)
{
	size_t i = 0;

	if (op_toks == NULL)
		return;

	for (i = 0; op_toks[i]; i++)
		free(op_toks[i]);

	free(op_toks);
}
