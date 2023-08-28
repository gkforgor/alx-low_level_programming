#include <unistd.h>
#include "lists.h"
/**
 * _putchar-writes the character c to the stdout
 * @c: The character to point
 * Return: On success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
