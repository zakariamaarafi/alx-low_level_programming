#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char to standard output(stdout).
 *
 * @c: character to print.
 *
 * Return: on success, the char is written to stdout and 1 is returned.
 * on error,-1 is to be returned, and errno is set appropriately.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
