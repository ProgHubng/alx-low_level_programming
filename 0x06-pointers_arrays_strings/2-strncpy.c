#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: the buffer storing the string copy.
 * @src: the source string.
 * @n: the maximum number of bytes to be copied from src.
 * Return: A pointer to the returning string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, int l;

	i = 0;
	l = 0;
	while (src[i])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
