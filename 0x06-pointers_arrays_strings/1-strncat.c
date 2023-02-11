#include "holberton.h"
/**
 *
 * function concatenates two strings
 * dest: string to be appended
 * src: appended from
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	
	dest[a] = '\0';

	return (dest);
}
