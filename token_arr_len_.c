#include "monty.h"

/**
 * token_arr_len - Gets the length of current op_toks
 * Return: Length of current op_toks (as int)
 */

unsigned int token_arr_len(void)
{
	unsigned int toks_len = 0;

	while (op_toks[toks_len])
		toks_len++;
	return (toks_len);
}
