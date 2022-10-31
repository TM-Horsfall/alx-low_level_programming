#include "main.h"

/**
 * memcpy - copies n bytes from Src to dest
 * @dest: the place we copy to
 * @src: the place we copy from
 * @n: how much we copy
 *
 * Return: pointer to dst
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
