#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string representing the binary number.
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int i = 0;

	if (b == 0)
		return (0);

	/* Calculate the decimal value of the binary number */
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = number << 1;
		if (b[i] == '1')
			number = number | 1;

		i++;
	}

	return (number);
}
