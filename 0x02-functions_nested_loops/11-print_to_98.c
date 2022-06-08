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
for (; n > 98; --n)
printf("%d, ", n);
}
else
{
for (; n <= 97; n++)
printf("%d, ", n);
}
printf("98\n");
}
