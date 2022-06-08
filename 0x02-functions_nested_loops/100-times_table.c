#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_times_table - prints the multiplication table of 9
 * @n: int
 * Return: returns the multiplication table.
 */
void print_times_table(int n)
{
int num;
int m;
int p;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (m = 1; m <= n; m++)
{
_putchar(',');
_putchar(' ');
p = num * m;
if (p <= 99)
_putchar(' ');
if (p <= 9)
_putchar(' ');
if (p >= 100)
{
_putchar((p / 100) + '0');
_putchar(((p / 10)) % 10 + '0');
}
else if (p <= 99 && p >= 10)
{
_putchar((p / 10) + '0');
}
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
}
