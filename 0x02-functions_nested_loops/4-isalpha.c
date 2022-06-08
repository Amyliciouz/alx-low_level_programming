#include "main.h"
/**
 * _isalpha - run code
 * @c:int
 * Description: checks if a character is an alphabet
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
if (c > 64 && c < 123)
return (1);
else
return (0);
}
