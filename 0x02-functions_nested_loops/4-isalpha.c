#include "main.h"
/**
 *_isalpha- checks if char is a letter, lowercase or uppercase
 *@c: is the char to be checked
 *Return: 1 if char is a letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
