#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that writes the character x to stdout
 * @x: The character to print
 * Return: On success 1
 * return -1 on error, errno is set appropriately.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
