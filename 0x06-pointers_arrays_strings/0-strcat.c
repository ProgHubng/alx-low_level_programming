#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src,
 * including the terminating null byte to the end of
 * the string pointed to by @dest
 * @dest: Pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int i, l;
	
	i = 0;
	l = 0;

	while (dest[i++])
		l++;
	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
