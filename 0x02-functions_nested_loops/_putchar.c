#include "main.h"
#include <unistd.h>
/**
 * _putchr - writes the characters to stdout
 * @c: the character to print 
 *
 * Return:on success 1.
 * on error -1 is returned and error is set appropriately 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
