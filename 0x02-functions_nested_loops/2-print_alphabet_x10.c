#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int te;
	char le;

	for (te = 0; te <= 9; te++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar (le);
		_putchar ('\n');
	}
}
