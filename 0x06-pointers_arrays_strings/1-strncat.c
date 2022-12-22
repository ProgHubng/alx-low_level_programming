#include "main.h"

/**
 * _strcat - Concatenates two strings using at most
 * an inputted number of bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (dest[i++])
		l++;
	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}


