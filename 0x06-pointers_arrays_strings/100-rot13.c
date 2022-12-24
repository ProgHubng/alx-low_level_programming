#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: the string to be encoded
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;
	int ii;

	i = 0;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E' 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (str[i])
	{
		for (ii = 0; ii < 52; ii++)
		{
			if (str(i) == alphabet[ii])
			{
				str[i] = rot13key[ii];
				break;
			}
		}
		i++
	}

	return (str)l
}
