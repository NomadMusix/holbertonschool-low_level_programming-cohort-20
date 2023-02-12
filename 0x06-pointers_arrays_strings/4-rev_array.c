#include "holberton.h"
/**
 * reverse_array reverses the content of an array of integers
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;
	int tmp;

	whle (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
