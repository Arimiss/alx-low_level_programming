#include <stdio.h>


/**
 * main - prints the alphabets in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);

	putchar('\n');
	return (0);
}
