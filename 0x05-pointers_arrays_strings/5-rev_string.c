#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: Nothing
 */

void rev_string(char *s)
{
int l,i;
char ch;
/*find string length without null char*/
for (l = 0; s[l] != '\0'; ++l);
/*swap the string by looping to half of the string*/
for (i = 0; i < l / 2; ++i)
{
ch = s[1];
s[i] = s[l -1 - i]; /*Because the arrays starts from 0*/
s[l - 1 - i] = ch;
}
}
