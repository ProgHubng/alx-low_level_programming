#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != 50 && j != 32)
		_putchar(j);
	}
		_putchar('\n');
}
