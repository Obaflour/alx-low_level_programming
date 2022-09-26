/**
 * _strchr - a function that locates a character in a strin
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of character or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++
	}
	if (*s == c)
		return (s);
	return ('\0');
}
