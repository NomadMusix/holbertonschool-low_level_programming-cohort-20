#include "holberton.h"
/**
 * reverse_array reverses the content of an array of integers
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0, end n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
