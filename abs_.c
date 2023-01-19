#include "monty.h"

/**
 * _abs - gets the absolute value of an integer
 * @i: integer to get absolute value of
 * Return: unsigned integer abs rep of i
 */

unsigned int _abs(int i)
{
	if (i < 0)
	{
		return (-(unsigned int)i);
	}
	return ((unsigned int)i);
}
