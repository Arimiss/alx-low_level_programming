#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
	}

	putchar('\n');

	return (0);

}
