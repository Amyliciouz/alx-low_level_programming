#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_to_98 - prints all numbers ti 98
 * @n: int
 * return zero
 */
void print_to_98(int n)
{
if (n > 98)
{
int a = n;
for (a  = n ; a = 98; --a)
{
printf("%d, ", a);
}
}
else if (n < 98)
{
int a = n;
for (a  = n ; a = 98; a++)
{
printf("%d, ", a);
}
}
else
{
int a = 98;
printf("%d, ", a);
}
}
