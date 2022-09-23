#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *
 * @dest: string that will be appended
 * @scr: strings to be concatenated upon
 *
 * Return: returns pointer to @ dest
 */
char *_strcat(char *dest, char *src)
{
	int b, d;

	b = d = 0;

	while (*(dest + b))
		b++;

		while ((*(dest + b) = *(src + d)))
		{
			b++;
			d++;
		}
	return (dest);
}
