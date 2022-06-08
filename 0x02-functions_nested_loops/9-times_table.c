#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * times_table - prints the multiplication table of 9
 * Return: returns the multiplication table.
 */
void times_table(void)
{
int i = 0;
for (; i <= 9; i++)
{
int g = 0;
while (g <= 9)
{
int v = i * g;
if (v > 9)
{
_putchar (v / 10 + '0');
_putchar (v % 10 + '0');
}
else if (g != 0)
{
_putchar (' ');
_putchar (i * g + '0');
}
else
_putchar (i * g + '0');
if (g != 9)
{
_putchar (',');
_putchar (' ');
}
g++;
}
_putchar ('\n');
}
}
