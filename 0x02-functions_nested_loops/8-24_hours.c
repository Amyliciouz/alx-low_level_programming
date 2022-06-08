#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * jack_bauer - displays time
 * Return: return zero
 */
void jack_bauer(void)
{
int h;
for (h = 0; h <= 23; h++)
{
int m = 0;
while (m <= 59)
{
_putchar (h / 10 + '0');
_putchar (h %  10 + '0');
_putchar (':');
_putchar (m / 10 + '0');
_putchar (m % 10 + '0');
_putchar ('\n');
m++;
}
}
}
