#include "main.h"

/**
 * _memcpy - a functio that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k;
	int i;

	k = 0;
	i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
