#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0 ; *str != '\0' ; i++)
		_putchar(*str);
	_putchar('\n');


}
