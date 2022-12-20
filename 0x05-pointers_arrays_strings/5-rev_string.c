#include "main.h"

/**
 * rev_string - reversed of a string
 * @s: string input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
