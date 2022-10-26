#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a : an array of integers
 * @n : the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
