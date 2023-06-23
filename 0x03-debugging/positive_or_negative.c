#include <stdio.h>

/**
 * positive_or_negative - Prints if an integer is positive or negative.
 * @n: The integer to be checked.
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
