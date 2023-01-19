#include "monty.h"

/**
 * is_delim - checks if stream has delimitor char
 * @ch: character in stream
 * @delims: Pointer to null terminated array of delimitors
 * Return: 1 on success
 *	else, 0 on failure
 */

int is_delim(char ch, char *delims)
{
	int i = 0;

	while (delims[i])
	{
		if (delims[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
