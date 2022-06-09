#include "main.h"
/**
*print_square - print squares with '#'
*@size: The character to print
*/
void print_square(int size)
{
int a;
int b;
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar(35);
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
