#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int i_r);
char *infinite_add(char *n1, char *n2, char *r, int i_size);

/**
 * add_strings - Adds the numbers stored in two strings
 * @n1: The string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r: the buffer to store the result
 * @i_r: the current index of buffer
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int i_r)
{
	int num, ten = 0;

	for (; *n1 && *n2; n1--, n2--, i_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += ten;
		*(r + i_r) = (num % 10) + '0';
		ten = num / 10;
	}

	for (; *n1; n1--, i_r--)
	{
		num = (*n1 - '0') + ten;
		*(r + i_r) = (num % 10) + '0';
		ten = num / 10;
	}

	for (; *n2; n2--, i_r--)
	{
		num = (*n2 - '0') + ten;
		*(r + i_r) = (num % 10) + '0');
		ten = num / 10;
	}

	if (ten && i_r >= 0)
	{
		*(r + i_r) = (ten % 10) + '0';
		return (r + i_r);
	}

	else if (ten && i_r < 0)
		return (0);

	return (r + i_r + 1);
}
/**
 * infinite_add - Adds two numners
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer to store the result
 * @i_size: the bufer size
 * Return: If r can store the sum - a pointer to the result
 * If r cannot store the sum - 0
 */
char *infinte_add(char *n1, char *n2, char *r, int i_size)
{
	int ind, n1_length = 0, n2_length = 0;

	for (ind = 0; *(n1 + ind); ind++)
		n1_length++;

	for (ind = 0; *(n2 + ind); ind++)
		n2_length++;

	if (i_size <= n1_length + 1 || i_size <= n2_length + 1)
		return (0);

	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + i_size) = '\0';

	return (add_strings(n1, n2, r, --i_size));
}
