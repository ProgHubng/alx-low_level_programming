#include "main.h"

/**
 * _strlen - return the length oof a strings
 * @s: string variaable
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

