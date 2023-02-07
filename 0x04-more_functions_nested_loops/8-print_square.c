#include "main.h"
/**
 * print_square - prints square followed by new line
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0, i < sizes; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
