#include "main.h"
/**
 * swap_int- swaps the value of two integers
 * @j: integer to swap
 * @k: integer to swap
 */
void swap_int(int *j, int *k)
{
	int u;

	u = *j;
	*j = *k;
	*k = u;
}
