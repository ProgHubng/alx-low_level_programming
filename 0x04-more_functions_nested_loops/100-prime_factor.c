#include <stdio.h>

/**
 * main - print largest prime factor numbers
 * Return: always 0
 */
int main(void)
{
	long int i, p;

	i = 612852475143;
	for (p = 0; p <= i; p++)
	{
		if (i % p == 0)
		{
			n /= p;
			p--;
		}
	}
printf("%1d\n", p);
return (0);
}

