#include <stdio.h>


/**
 * main - prints single digid=s in base 10
 * Return: Always 0
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
		putchar((j % 10) + '0');
	putchar('\n');

	return (0);
}
