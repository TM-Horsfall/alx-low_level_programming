#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character
 * @s: the string to look through
 * @c: the character to look for
 *
 * Return: a pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
