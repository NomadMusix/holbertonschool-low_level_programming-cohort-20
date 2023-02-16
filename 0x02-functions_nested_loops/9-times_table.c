#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k <= 9)
				_putchar(' ');
			else
			{
				_putchar('0' + (k / 10));
			}
			_putchar('0' + (k % 10));
		}
		_putchar('\n');
	}
}
