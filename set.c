#include <ctype.h>
#include "monty.h"

/**
 * is_digit - Checks if a string consists of digits.
 * @string: String to check.
 *
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);

	if (*string == '-')
		string++;

	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}

	return (1);
}

/**
 * isnumber - Checks if a string is a valid number.
 * @str: Provided string.
 *
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

