#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int x = 0, y = n - 1;

	while (x < y)
	{
	int temp = a[x];

	a[x] = a[y];
	a[y] = temp;

	x++;
	y--;
	}
}
