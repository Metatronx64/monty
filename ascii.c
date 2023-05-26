#include "monty.h"

/**
 * is_ascii - Checks if a value is within the ASCII range.
 * @a: The value to check.
 *
 * Return: 1 if the value is within the ASCII range, 0 otherwise.
 */
int is_ascii(int a)
{
	int b = a;

	if (b >= 0 && b <= 255)
	{
		return (1);
	}
	return (0);
}

