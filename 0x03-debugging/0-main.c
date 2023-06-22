#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Check if a number is positive or negative
 * @n: The number to check
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
}
