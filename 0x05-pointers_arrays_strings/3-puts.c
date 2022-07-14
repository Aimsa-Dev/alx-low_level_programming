#include "main.h"
/**
 * _puts - prints sting
 * @str: input string
 * Retun: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
