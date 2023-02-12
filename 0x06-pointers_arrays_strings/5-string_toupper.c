#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters to
 * uppercase
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	
	return (s);
}
