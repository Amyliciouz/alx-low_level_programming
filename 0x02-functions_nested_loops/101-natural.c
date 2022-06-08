#include <stdio.h>
#include "main.h"
/**
* main - prints all the sum of multiples of 3 or 5
* Return: zero.
*/
int main(void)
{
int i, n;
for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
n += i;
printf("%d\n", n);
return (0);
}
