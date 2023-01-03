#include "main.h"
#define <unistd.h>

/**
 * _putchar- writes the character c to stdout
 * @c: the character to print
 * Return: On success 1
 * On error, -1 is returned and errno is ser appropriately.
 */

int -putchar(char c)
{
	return (write(1, &c, 1));
}
