#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative- prints a random number
 *@n: numbers to be checked as positive or negative
 *Return:0 (unsuccess)
 */
int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
