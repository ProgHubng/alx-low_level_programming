#include "main.h"

/**
 * print_number - print an integer number
 * @i: input integer number
 * Return: no return
 */
void print_number(int i)
{ 
	unsigned int n, k, count;

	if (i < 0)
	{
		_putchar(45);
		n = i * -1;
	}
	else
	{
		n = i;
	}

	k = n;
	count = 1;

	while (k > 9)
	{
		k /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
