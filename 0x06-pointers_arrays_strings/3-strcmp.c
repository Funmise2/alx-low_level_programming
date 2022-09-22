#include "main.h"
#include <stdio>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: outputs the difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, r;
/**
 *
 * 	 iterate through src and
 *
 * 	compare it with dest
 *
 */
while (s1[i] != '\0' && s2[i] != '\0')
{
/**
 *
 * if they differ by a single character
 * don't iterate further
 */
if (s1[i] != s2[i])
{
r = s1[i] - s2[i];
break;
}
else
{
r = s1[i] - s2[i];
}
i++;
}
return (r);
}
