#include "stdio.h"
#include "main.h"

/**
 * main - prints Buzz each numbers of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if (i % 15 == 0)
		
			printf("FizzBizz");
		
		else if (i % 3 == 0)
		
			printf("Fizz");
		
		else if (i % 5 == 0)
		
			printf("Buzz");
		
		else
		
			printf(" %i", i);
		
		if (i < 100)
			printf(" ");
	}
	printf('\n');
	return (0);
}
