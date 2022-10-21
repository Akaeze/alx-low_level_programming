#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charater c to stdout
 * @c: The charater to print
 * Retturn: on success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
