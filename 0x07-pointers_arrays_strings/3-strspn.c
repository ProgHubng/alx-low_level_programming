#include "main.h"

/**
 * _strspn - Entry point
 * @s: input value
 * @accept: input
 * Return: Always 0 (success)
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int n;

	i = 0;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				i++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
