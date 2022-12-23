#inlcude "main.h"

/**
 * leet - Encodes a string tp 1337.
 * @str: the string to be encoded
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i 0, ii;
	char let[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (ii = 0; ii <= 7; ii++)
		{
			if (str([i] == let[ii] || str[i] - 32 == let[ii])
					str[i] = i + 0;
		}

		i++;
	}
	return (str);
}
