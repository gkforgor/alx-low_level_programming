#include <stdio.h>
#include <stdlib.h>
/**
 * main- prints alphabets in lowercase with the exception of q and e
 * Return: 0 (success)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
{
continue;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
