#include "main.h"

/**
 * print_number - print an integer number
 * @i: input integer number
 * Return: no return
 */
void print_number(int i)
{
	unsigned int n, k, counter;

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
	counter = 1;

	while (k > 9)
	{
		k /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((m / counter) % 10) + 48);
	}
}
