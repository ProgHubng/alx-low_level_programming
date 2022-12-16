#include "main.h"

/**
 * print_diagonal - prints diagonal line n times
 * @n: times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int j;
	int k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (j < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
