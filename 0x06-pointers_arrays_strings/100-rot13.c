#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @x: input parameter
 * Return: encoded string
 */
char *rot13(char *x)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = x;

	while (*x)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*x == rot13[i])
			{
				*x = ROT13[i];
				break;
			}
		}
		x++;
	}
	return (ptr);
}
