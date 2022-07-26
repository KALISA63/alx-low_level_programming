#include"main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 *
 * Return: character or a string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, x;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
				{
					x++, j++;
				}
				else
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
