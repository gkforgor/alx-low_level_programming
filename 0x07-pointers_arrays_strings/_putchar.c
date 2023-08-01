#include "main.h"
#include <unistd.h>
/**
 * _putchar- writes character c to stdout
 * @c: character to point
 * Return: On success
 * On error, -1 is returned, and errno is set appopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
