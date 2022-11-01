#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurance of a niddle in a haystack
 * @haystack: where we lool
 * @needle: what we look for
 *
 * Return: a pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int point;

for (; *haystack; haystack++)
{
for (point = 0; needle[point]; point++)
{
if (!(*(haystack + point)))
{
return (NULL);
}
if (*(haystack + point) != needle[point])
break;
}
if (needle[point] == '\0')
return (haystack);
}
return (NULL);
}
