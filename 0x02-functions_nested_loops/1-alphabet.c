#include "main.h"
/**
 *print_alphabet- prints all alphabets in lowercase
 *@c: is a value printed by _putchar
 *Return: 0 (success)
 */
int _putchar(char c);
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
