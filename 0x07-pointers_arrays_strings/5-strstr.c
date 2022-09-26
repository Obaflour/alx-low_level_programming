#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}
