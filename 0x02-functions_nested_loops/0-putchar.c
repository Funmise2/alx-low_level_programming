#include "_putchar.h"

/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char *C = "_putchar";
while (*C)
{
_putchar(*C);
C++;
}
_putchar('\n');
return (0);
}

