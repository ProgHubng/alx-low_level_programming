#include " main.h"

/**
 * _strcy - copy a string pointed to src
 * @dest: destination pointed
 * @src: source pointed
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;
	}
	*(dest + l) = '\0';
	return (dest);
}
