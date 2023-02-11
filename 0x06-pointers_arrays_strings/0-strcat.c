#include holberton.h
/**
 *
 * This function appends the src string to the dest string, 
 * overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte
 */
char *_strcat(char *dest, char *src);
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] + src[b];
		a++;
		b++;
	}
return(dest);
}
