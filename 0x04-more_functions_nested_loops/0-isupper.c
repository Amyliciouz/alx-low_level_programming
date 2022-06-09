#include "main.h"
/**
* _isupper - checks if the text is upper or lower
* @c:int
* Return: returns zero
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
