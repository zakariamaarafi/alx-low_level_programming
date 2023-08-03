#include "main.h"

/**
 * binary_to_uint - Converts binary numbers to unsigned integers.
 *
 * @b: String containing the binary number. must be '0' and '1' char only.
 *
 * Return: converted unsigned int value.in case @b is
 * NULL or contains invalid characters,returns 0 (error).
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int de_va = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		de_va = 2 * de_va + (b[x] - '0');
	}

	return (de_va);
}
