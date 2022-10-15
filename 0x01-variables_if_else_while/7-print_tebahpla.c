#include <stdio.h>

/**
 * main - printing lower case alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char ar;

	for (ar = 'z'; ar >= 'a'; ar--)
		putchar(ar);

	putchar('\n');

	return (0);
}
