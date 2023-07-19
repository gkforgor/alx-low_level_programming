#include <unistd.h>
#include "main.h"
/**
 * _putchar- prints a single character
 * @c:character that are printed out by _putchar
 * Return: it returns 1 unsuccess else -1
 */  
int _putchar(char c)
{
	return(write(1, &c, 1));
}
