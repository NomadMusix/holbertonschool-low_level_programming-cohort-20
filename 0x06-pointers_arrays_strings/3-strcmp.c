#include "holberton.h"
/**
 *
 * strcmp compares two strings
 *
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] == s2[a] && s1[a]; a++)
		;

	return (s1[a] - s2[a]);
}
