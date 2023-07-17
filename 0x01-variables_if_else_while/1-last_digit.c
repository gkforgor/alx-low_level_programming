#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- prints random number
 * Return: 0 (unsuccess)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("the last digit of n is greater than 5 %d\n", n);
}
else if (n == 0)
{
printf("the last digit of n is zero %d\n", n);
}
else
{
printf("the last digit of n is less than 6 and not 0 %d\n", n);
}
return (0);
}
