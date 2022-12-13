#include <stdio.h>


/**
 * main - print all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num3 = '0'; num3 <= '9'; num3++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num = '0'; num <= '9'; num++)
			{
				if (!((num == num2) || (num2 == num3) || (num2 > num) || (num3 > num2)))
				{
					putchar(num3);
					putchar(num2);
					putchar(num);
					if (!(num == '9' && num3 == '7' && num2 == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
