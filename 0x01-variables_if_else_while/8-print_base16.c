#include <stdio.h>

/**
 * main - prints the number in base 16
 * Return: Always 0
 */
int main(void)
{
	int nu;
	char lu;

	for (nu = 0; nu < 10; nu++)
	putchar((nu % 10) + '0');
	for (lu = 'a'; lu <= 'f'; lu++)
	putchar(lu);

	putchar('\n');

	return (0);
}
