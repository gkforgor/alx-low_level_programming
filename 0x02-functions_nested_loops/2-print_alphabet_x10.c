#include "main.h"
/**
 * print_alphabet_x10-prints 10 times the alphabet, in lowercase
 * @c: the output printed by _putchar
 * Return: 0 (success)
 */
int _putchar(char c);
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
