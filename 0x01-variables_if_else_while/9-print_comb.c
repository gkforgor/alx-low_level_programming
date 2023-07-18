#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)

{
for (j = i; j < 10; i++)
{
putchar(i * 10 + j + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
