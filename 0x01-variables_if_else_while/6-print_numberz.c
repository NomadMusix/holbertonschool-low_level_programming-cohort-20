#include <stdio.h>
/**
 * main - prints numbers
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}

	putchar('\n');
	return (0);
}
