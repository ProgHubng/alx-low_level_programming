#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @i: integer
 * @n: ingeger
 * Return: evaluate sqrt
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)

		return (n);

	else if (i * i < n)

		return (_evaluate(i + 1, n));

	else if (i * i == n)

		return (i);
	else
		return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to find sqrt of
 * Return: squareroot of n
 * -1 if n does not have a naturak sqrt
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (i < 0)
		return (-1);
	else
		return (_evaluate(i, n));
}
