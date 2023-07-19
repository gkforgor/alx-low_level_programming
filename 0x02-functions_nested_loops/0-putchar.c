#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main- prints _putchar
 * Return: 0 (success)
 */
int main(void)
{
char v[] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(v[i]);
i++;
}
_putchar('\n');
return (0);
}
