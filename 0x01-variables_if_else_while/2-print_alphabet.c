#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints alphabets in lowercase
 * Return: 0 (success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
