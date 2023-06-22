#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    times_table();
    return 0;
}

/**
 * times_table - prints the times table from 0 to 9
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            result = i * j;
            if (j == 0)
                printf("%2d", result);
            else
                printf("%3d", result);
        }
        printf("\n");
    }
}

