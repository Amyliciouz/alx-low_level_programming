#include <stdio.h>
/**
* main - check the code.
*
* Return: Always return 0.
*/
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (((a % 3) && (a % 5)) == 0)
printf("FizzBuzz");
else if ((i % 3) == 0)
printf("Fizz");
else if ((i % 5) == 0)
printf("Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
