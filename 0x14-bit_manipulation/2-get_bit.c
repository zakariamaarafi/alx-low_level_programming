#include "main.h"

/**
 * get_bit - it returns value of a bit at an index as decimal number
 *
 * @n: num to search
 *
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
