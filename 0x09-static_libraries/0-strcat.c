#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: pointer that stores a string
 * @src: pointer that stores a string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
