#include "main.h"
#include <unistd.h>
/**
 * _putchar- writes the character c to stdout
 * @c: the character to point
 * Return: On success 1
 * On error,-1 is returned, and errno is set apprioprately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
