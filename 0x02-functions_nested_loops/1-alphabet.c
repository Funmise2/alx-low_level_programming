#include "main.h"
#include "string.h"
/**
 * Description: print_alphabet using putchar prototype
 *
 * Return : Always 0 (Success)
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ++ch)
_putchar(ch);
_putchar('\n');

return (0);
}
