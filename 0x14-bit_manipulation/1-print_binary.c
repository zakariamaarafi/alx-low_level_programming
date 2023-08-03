#include "main.h"

/**
 * print_binary - prints binary equivalent
 * of the decimal number.
 *
 * @n: number prined in binary form.
 */
void print_binary(unsigned long int n)
{
int x, start = 0;
unsigned long int NUM;

for (x = 63; x >= 0; x--)
{
	NUM = n >> x;

	if (NUM & 1)
	{
		_putchar('1');
		start++;
	}
	else if (start)
		_putchar('0');
}
if (!start)
	_putchar('0');
}
