#include "main.h"
/**
 * print_alphabet - print alphabets
 * Description: A code that prints out the alphabets
 * Return: return zero.
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
