#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints last digit of a number
 * @n: intiger
 * Return: return value of the last digit.
 */
int print_last_digit(int n)
{
int v = abs(n % 10) + '0';
_putchar (v);
return (v - '0');
}

