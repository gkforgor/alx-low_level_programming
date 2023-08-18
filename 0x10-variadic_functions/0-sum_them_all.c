#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- adds all the parameters passed to it
 * @n: constant parameter of type int
 * va_list- type argument for iteration
 * va_start- start iteration with va_list
 * Return: On success 1
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)

	sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
