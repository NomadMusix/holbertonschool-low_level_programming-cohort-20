#include "holberton.h"
/**
 * _strncpy, function that copies a string
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a]; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';
	
	return (dest);
}
